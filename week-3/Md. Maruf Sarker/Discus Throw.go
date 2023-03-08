// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/DISCUS
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 622

package main

import (
	"fmt"
	"math"
)
func main() {
	var t int
	var x, y, z float32
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&x, &y, &z)
		fmt.Println(math.Max(float64(x), math.Max(float64(y), float64(z))))
	}
}