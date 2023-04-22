// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/B
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    pair<int, int> p1, p2;
    p1.first = a;
    p1.second = b;
    p2.first = c;
    p2.second = d;

    vector<pair<int, int>> v;
    v.push_back(p1);
    v.push_back(p2);

    sort(v.begin(), v.end());

    if(a == b and b == c and c == d){
        cout << 1 << endl;
    }else if(v[1].first <= v[0].second){
        int mx = max(v[0].second, v[1].second);
        int mn = min(v[0].first, v[1].first);
        cout << mx - mn + 1 << endl;
    }else{
        int first = b - a + 1;
        int second = d - c + 1;
        cout << first + second << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
