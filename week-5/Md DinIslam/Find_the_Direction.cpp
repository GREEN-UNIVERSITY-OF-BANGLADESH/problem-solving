#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
void solve(){
    int x;
    cin>>x;
    if(x % 4 == 0) cout<<"North"<<endl;
    else if(x % 4 == 1) cout<<"East"<<endl;
    else if(x % 4 == 2) cout<<"South"<<endl;
    else cout<<"West"<<endl;
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