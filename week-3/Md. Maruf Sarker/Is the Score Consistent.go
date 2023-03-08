// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/TRUESCORE
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 572

package main

import "fmt"
func main() {
	var t int
	var a, b, c, d int32
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&a, &b, &c, &d)
		
		if a <= c && b <= d {
			fmt.Println("POSSIBLE")
		}else{
			fmt.Println("IMPOSSIBLE")
		}
	}
}