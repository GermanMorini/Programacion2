package main

import "fmt"

func main() {
	// por defecto, el tipo 'int' tiene la misma longitud que la arquitectura del procesador
	// (64 bits en mi caso, o sea 8 bytes)
	var arr [5]int
	var p *int

	// no se pueden comparar punteros en go :(
	for i := range arr {
		p = &arr[i]
		fmt.Println(p)
	}
}
