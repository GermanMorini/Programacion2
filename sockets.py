import socket
import argparse
import signal
import sys
import threading
import logging

logging.basicConfig(level=logging.INFO, format='%(asctime)s - [%(levelname)s] - %(message)s')
logger = logging.getLogger(__name__)
ok = True

def write_data(socket):
    while ok:
        data = sys.stdin.readline()
        if not data:
            break
        socket.send(data.encode('utf-8'))

def read_data(socket):
    while ok:
        data = socket.recv(4096)
        if not data:
            break
        sys.stdout.write(data.decode('utf-8'))
        sys.stdout.flush()

def run_server(host, port):
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    reader = None
    client_socket = None
    try:
        server.bind((host, port))
        server.listen(5)
        logger.info(f"Listening on {host}:{port}")

        client_socket, _ = server.accept()
        logger.info(f"Accepted connection from {client_socket.getpeername()[0]}:{client_socket.getpeername()[1]}")
        
        reader = threading.Thread(target=read_data, args=(client_socket,))
        writer = threading.Thread(target=write_data, args=(client_socket,))

        reader.start()
        writer.start()
    except Exception as e:
        logger.error(f"{e}")
    finally:
        if reader:
            reader.join()
        if client_socket != None:
            client_socket.close()
        server.close()

def run_client(host, port):
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    reader = None
    try:
        client.connect((host, port))
        logger.info(f"Connected to {host}:{port}")

        writer = threading.Thread(target=write_data, args=(client,))
        reader = threading.Thread(target=read_data, args=(client,))
        
        writer.start()
        reader.start()
    except Exception as e:
        logger.error(f"{e}")
    finally:
        if reader != None:
            reader.join()
        client.close()

def terminar(signal, frame):
    logger.info("Connection terminated: EOF")
    global ok
    ok = False
    sys.exit(0)

def main():
    parser = argparse.ArgumentParser(description='Simple Netcat-like Python Script')
    parser.add_argument('-l', '--listen', action='store_true', help='Listen mode')
    parser.add_argument('-p', '--port', type=int, default=8080, help='Port to connect or bind to')
    parser.add_argument('-H', '--host', default='localhost', help='Host to connect to')
    args = parser.parse_args()

    signal.signal(signal.SIGINT, terminar)

    if args.listen:
        run_server(args.host, args.port)
    else:
        run_client(args.host, args.port)

if __name__ == '__main__':
    main()
