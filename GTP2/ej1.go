package main

import "fmt"

func main() {
	var a, b int
	var c *int

	a, b = 69, 420

	c = &a
	fmt.Printf("%p → %d\n", c, *c)

	c = &b
	fmt.Printf("%p → %d\n", c, *c)
}
