// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/SUPCHEF
// Language: cpp / go / c / python
// Date: 2022-11-21
// Difficulty Rating: 823

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;

        (y * z < x) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}