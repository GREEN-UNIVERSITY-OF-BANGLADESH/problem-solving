#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x < 100) cout<<"Easy"<<endl;
    else if(x < 200) cout<<"Medium"<<endl;
    else cout<<"Hard"<<endl;
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