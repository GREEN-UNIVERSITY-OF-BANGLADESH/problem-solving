#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
void solve(){
    float x1,x2,y1,y2,d;
    cin>>x1>>x2>>y1>>y2>>d;
    int day = min((x1/y1), (x2/y2));
    if(day < d){
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