#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
void solve(){
    char a,b,c;
    cin>>a>>b>>c;
    char x,y;
    cin>>x>>y;
    string s = "";
    s = s+a+b+c;
    for(int i = 0; i < s.size(); ++i){
        if(x == s[i]){
            cout<<x<<endl; return;
        }
        if(y == s[i]){
            cout<<y<<endl; return;
        }
    }
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