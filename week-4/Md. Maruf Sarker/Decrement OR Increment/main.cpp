// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/DECINC
// Language: cpp / go / c / python
// Date: 2022-10-12
// Difficulty Rating: 722

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while(t--) {
	int n;
	cin >> n;
	
	int count = 0;
	if(n % 4 == 0) count++;
	else count--;

    cout << n + count << endl;
}
return 0;
}