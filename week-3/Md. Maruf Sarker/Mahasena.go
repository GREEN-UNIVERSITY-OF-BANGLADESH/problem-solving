// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/AMR15A
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 533

package main

import "fmt"
func main() {
	var n int
	fmt.Scan(&n)

	var arr = make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	even := 0
	odd := 0

	for i := 0; i < n; i++ {
		if arr[i] % 2 == 0 {
			even++
		} else {
			odd++
		}
	}

	if even > odd {
		fmt.Println("READY FOR BATTLE")
	} else {
		fmt.Println("NOT READY")
	}
}