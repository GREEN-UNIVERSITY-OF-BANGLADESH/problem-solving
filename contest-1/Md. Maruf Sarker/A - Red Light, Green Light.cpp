// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/A
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > k) cnt++;
    }
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
