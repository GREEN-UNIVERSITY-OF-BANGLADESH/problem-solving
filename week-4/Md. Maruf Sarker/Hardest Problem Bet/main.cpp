// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/HARDBET
// Language: cpp / go / c / python
// Date: 2023-02-04
// Difficulty Rating: 803

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z;
    cin >> x >> y >> z;

    if(z < x && z < y) cout << "Alice" << endl;
    else if(y < x && y < z) cout << "Bob" << endl;
    else cout << "Draw" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}