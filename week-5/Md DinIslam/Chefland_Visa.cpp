#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> v(6);
    for(auto &x : v) cin>>x;
    if(v[0] <= v[1] && v[2] <= v[3] && v[4] >= v[5]){
        cout<<"YES"<<endl; return;
    }  cout<<"NO"<<endl;
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