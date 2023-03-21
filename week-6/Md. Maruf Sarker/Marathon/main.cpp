// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/MARARUN?tab=statement
// Language: cpp / go / c / python
// Date: 2023-02-21
// Difficulty Rating: 955

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define nn int n; cin >> n
#define ixy int x, y; cin >> x >> y
#define ixyz int x, y, z; cin >> x >> y >> z
#define arr_input(n) int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i]
#define arr2_input(n, m) int arr[n][m]; for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j]
#define arr_output(n) for(int i = 0; i < n; i++) cout << arr[i] << endl
#define arr2_output(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cout << arr[i][j] << endl
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
void maruf(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
}

void solve(){
    int d, D, a, b, c;
    cin >> d >> D >> a >> b >> c;
    
    int x = d * D;
      
    if(x < 10) cout << "0" << endl;
    else if((x >= 10) && (x < 21)) cout << a << endl;
    else if((x >= 21) && (x < 42)) cout << b << endl;
    else cout << c << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}