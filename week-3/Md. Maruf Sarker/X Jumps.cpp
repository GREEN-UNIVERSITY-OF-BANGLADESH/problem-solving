// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/XJUMP
// Language: cpp / go / c / python
// Date: 2022-12-02
// Difficulty Rating: 686

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int x, y;
        cin >> x >> y;

        if(x % y == 0) cout << x / y << endl;
        else cout << x / y + 1 << endl;
    }
    return 0;
}