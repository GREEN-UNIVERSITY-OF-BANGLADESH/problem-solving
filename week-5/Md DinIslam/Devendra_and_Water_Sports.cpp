#include <bits/stdc++.h>
using namespace std;
void solve(){
    int z,y,a,b,c;
    cin>>z>>y>>a>>b>>c;
    int sum = a+b+c;
    // if((z-y) >= sum) cout<<"YES"<<endl;
    // else cout<<"N0"<<endl;
    cout<<((z-y) >= sum ? "YES" : "NO")<<endl;
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