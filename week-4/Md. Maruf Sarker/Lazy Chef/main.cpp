// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/LAZYCHF
// Language: cpp / go / c / python
// Date: 2022-11-20
// Difficulty Rating: 801

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;

        cout << min(x * y, x + z) << endl;
    }
    return 0;
}