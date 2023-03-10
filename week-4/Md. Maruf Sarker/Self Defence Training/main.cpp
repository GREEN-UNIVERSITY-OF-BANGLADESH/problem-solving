// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/SELFDEF
// Language: cpp / go / c / python
// Date: 2022-11-24
// Difficulty Rating: 716

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] >= 10 && a[i] <= 60)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}