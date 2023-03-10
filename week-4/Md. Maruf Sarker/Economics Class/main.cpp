// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/ECOCLASS
// Language: cpp / go / c / python
// Date: 2022-11-24
// Difficulty Rating: 787

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int s[n], d[n];
        for(int i = 0; i < n; i++) cin >> s[i];
        for(int i = 0; i < n; i++) cin >> d[i];

        int cnt = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == d[i]) cnt++;
        
        cout << cnt << endl;
    }
    return 0;
}