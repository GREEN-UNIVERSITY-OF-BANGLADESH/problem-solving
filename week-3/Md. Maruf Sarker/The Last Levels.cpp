// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/LASTLEVELS
// Language: cpp / go / c / python
// Date: 2022-12-02
// Difficulty Rating: 679

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int x, y, z;
	    cin >> x >> y >> z;
	    int p = x / 3;
	    if(x % 3 == 0){
	        cout << x * y + ((p - 1) * z) << endl;
	    }
	    else{
	        cout << (x * y) + (p * z) << endl;
	    }
	}
}