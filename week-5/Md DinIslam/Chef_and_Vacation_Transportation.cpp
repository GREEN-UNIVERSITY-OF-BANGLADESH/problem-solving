#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b) < c){
        cout<<"PLANEBUS"<<endl;
    }
    else if((a+b) == c) cout<<"EQUAL"<<endl;
    else cout<<"TRAIN"<<endl;
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
    // solve();
    return 0;
}