package main

import "fmt"

func main() {
	var arr [5]int

	p1 := &arr[0]
	p2 := &arr[4]

	// no se pueden hacer operaciones con punteros en go :(
	fmt.Printf("%p - %p = -32\n", p1, p2)
}
