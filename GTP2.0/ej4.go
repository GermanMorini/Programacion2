package main

import (
	"fmt"
	"math/rand"
)

func main() {
	// new permite alojar memoria para un tipo
	var arr = new([15]int)

	rellenar(arr)

	for _, i := range arr {
		fmt.Println(i)
	}
}

func rellenar(arr *[15]int) {
	for i := range arr {
		arr[i] = rand.Intn(101)
	}
}
