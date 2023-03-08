// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/submit/F1RULE
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 487

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        if(n <= m) cout << n << endl;
        else cout << n + (n - m) << endl;
    }
}