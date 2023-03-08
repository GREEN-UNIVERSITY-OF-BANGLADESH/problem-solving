// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/submit/F1RULE
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 487

package main

import "fmt"
func main() {
	var t int
	var x, y float32
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&x, &y)
		if x * 1.07 >= y {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}