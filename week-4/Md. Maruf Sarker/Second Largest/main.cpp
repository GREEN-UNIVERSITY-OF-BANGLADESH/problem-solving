// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/submit/FLOW017
// Language: cpp / go / c / python
// Date: 2022-10-06
// Difficulty Rating: 730

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--) {
	int x, y, z;
	cin >> x >> y >> z;
	    
	if(x > y && x < z || x > z && x < y) cout << x << "\n";
	else if(y > x && y < z || y > z && y < x) cout << y << "\n";
	else cout << z << "\n";
}
return 0;
}