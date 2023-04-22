// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/F
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));
    a.erase(unique(all(a)), a.end());

    for(auto x: a) cout << x << " ";
    cout << endl;
}
int main() {
    solve();
}
