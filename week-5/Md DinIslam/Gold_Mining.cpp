#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
void solve(){
    vector<int> v(3);
    for(auto &x : v) cin>>x;
    int ans = v[1] - v[2];
    if(ans > (v[0] * v[2])){
        pn; return;
    } py;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    //solve();
    return 0;
}