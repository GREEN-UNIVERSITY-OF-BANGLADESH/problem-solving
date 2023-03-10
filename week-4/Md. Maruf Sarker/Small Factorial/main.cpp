// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/submit/FLOW018
// Language: cpp / go / c / python
// Date: 2022-10-12
// Difficulty Rating: 760

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while(t--) {
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i;
    }
    cout << ans << endl;
}
return 0;
}