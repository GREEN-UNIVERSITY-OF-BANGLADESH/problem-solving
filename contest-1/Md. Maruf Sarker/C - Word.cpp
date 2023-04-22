// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/C
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int up = 0, low = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            up++;
        } else {
            low++;
        }
    }

    if (up > low) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    } else if (up == low) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s << endl;
}
int main() {
    solve();
}
