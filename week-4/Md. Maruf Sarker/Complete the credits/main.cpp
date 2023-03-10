// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/CREDITS
// Language: cpp / go / c / python
// Date: 2023-02-04
// Difficulty Rating: 809

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n > 65) cout << "Overload\n";
    else if(n < 35) cout << "Underload\n";
    else cout << "Normal\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}