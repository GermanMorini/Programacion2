package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {
	if len(os.Args) != 2 || len(os.Args[1]) > 10 {
		fmt.Printf("Uso: %s CADENA\nCADENA de largo <= 10\n", os.Args[1])
		os.Exit(1)
	}

	fmt.Println(mayusculizar(&os.Args[1]))
}

func mayusculizar(s *string) string {
	return strings.ToUpper(*s)
}
