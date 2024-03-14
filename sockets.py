#!/bin/python3

import sys, optparse
from optparse import Values
from socket import *

class Connection:

        MAX_CONNECTIONS:int = 3 # Cantidad máxima de connexiones simultáneas a escuchar
        DEFAULT_TIMEOUT:int = 10 # Tiempo que se quedará escuchando por conexiónes
        IP:str
        PORT:int
        VERBOSE:bool
        buff:str = ""
        sock:socket

        def __init__(self, verbose, ip, port):
                self.VERBOSE = verbose

                # AF_INET -> IpV4
                # SOCK_STREAM -> TCP
                self.sock = socket(AF_INET, SOCK_STREAM)
                self.IP = ip
                self.PORT = port

        # Manda datos
        def send_data(self, msg):
                self.sock.connect((self.IP, self.PORT))
                if self.VERBOSE: print(f"Conectado a {self.IP}:{self.PORT}")

                self.sock.send(msg)
                self.close()

        # Recive datos
        def recv_data(self):
                # 'bind' enlaza la dirección IP a el puerto especificado (otros procesos en el sistema no podrán usar esa dirección)
                self.sock.bind((self.IP, self.PORT))
                self.sock.listen(self.MAX_CONNECTIONS)
                self.sock.settimeout(self.DEFAULT_TIMEOUT)
                if self.VERBOSE: print(f"Escuchando en {self.IP}:{self.PORT} ...")

                # Retorna otro socket enlazado a la conexión, junto con su dirección
                conn, addr = self.sock.accept()
                if self.VERBOSE: print(f"Conexión desde {addr[0]}:{addr[1]}")

                while True:
                        data = conn.recv(1024)
                        sys.stdout.buffer.write(data)

        def close(self):
                self.sock.close()

# Manipulo los parámetros pasados al script
def parse_options() -> (Values, list[str]):
        # DEFAULT_IP = gethostbyname(gethostname())
        DEFAULT_IP = '0.0.0.0'
        DEFAULT_PORT = 8080

        parser = optparse.OptionParser()
        parser.add_option('-H', dest='ip', type='str', help='IP de destino', default=DEFAULT_IP)
        parser.add_option('-p', dest='port', type='int', help='Puerto de destino', default=DEFAULT_PORT)
        parser.add_option('-m', dest='msg', type='str', help='Mensaje a enviar')
        parser.add_option('-t', dest='conn_type', type='str', help='Tipo de conexión (send, recv)', default='send')
        parser.add_option('-v', dest='verbose', action='store_true', default=False, help='Verbosidad')
        
        return parser.parse_args()

def main():
        (opt, args) = parse_options()
        
        conn:Connection

        try:
                conn = Connection(opt.verbose, opt.ip, opt.port)

                if opt.conn_type == 'send':
                        if opt.msg == None:
                                # En caso de usar pipes. Ej: `cat imagen.jpg | python3 sockets.py -t send`
                                data = sys.stdin.buffer.read()
                        else:
                                # En caso de usar la flag `-m`
                                data = opt.msg

                        try:
                                conn.send_data(data.encode())
                        except:
                                conn.send_data(data)
                elif opt.conn_type == 'recv':
                        conn.recv_data()

                        # try:
                        #         # En caso de que el mensaje sea texto plano
                        #         print(msg.decode('utf-8'))
                        # except:
                        #         # En caso de que el mensaje sea un archivo, ej: una foto, pdf
                        #         sys.stdout.buffer.write(msg)
                else:
                        print("No existe ese tipo de conexión!")

                conn.close()
        except KeyboardInterrupt as ki:
                print(ki)
                exit(1)
        finally:
                conn.close()

if __name__ == '__main__':
        main()
