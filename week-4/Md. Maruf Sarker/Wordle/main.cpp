// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/submit/WORDLE
// Language: cpp / go / c / python
// Date: 2022-09-20
// Difficulty Rating: 804

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    int t;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        
        for(int i = 0; i < 5; i++)
            cout << ((s1[i] == s2[i]) ? 'G' : 'B');

        cout<<"\n";
    }
}