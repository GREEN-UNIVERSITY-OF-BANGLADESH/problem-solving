#include <bits/stdc++.h>
using namespace std;
void solve(){
    float x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if((y1/x1) > (y2/x2)){
        cout<<1<<endl;
    }
    else if((y1/x1) < (y2/x2)){
        cout<< -1<<endl;
    }
    else cout<<0<<endl;
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