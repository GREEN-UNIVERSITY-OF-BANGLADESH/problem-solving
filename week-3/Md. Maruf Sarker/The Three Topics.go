// Written by: Md. Maruf Sarker
// Platform: Go
// Problem: https://www.codechef.com/problems/THREETOPICS
// Platform: CodeChef
// Date: 2023-02-27
// Difficulty Rating: 573

package main

import "fmt"
func main() {
	var a, b, c, x int
	fmt.Scan(&a, &b, &c, &x)

	if a == x || b == x || c == x{
		fmt.Println("YES")
	}else{
		fmt.Println("NO")
	}
}