// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/PENALTY
// Language: cpp / go / c / python
// Date: 2023-02-04
// Difficulty Rating: 925

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

int read(){static int x; cin >> x; return x;}
ll readll(){static ll x; cin >> x; return x;}
double readd(){static double x; cin >> x; return x;}
ld readld(){static ld x; cin >> x; return x;}
string reads(){static string x; cin >> x; return x;}
char readc(){static char x; cin >> x; return x;}
#define mms ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(2)

void solve(){
    arr_input(10);

    int t1 = 0, t2 = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j += 2)
            if(arr[j] == 1) t1++;
        for(int j = 1; j < 10; j += 2)
            if(arr[j] == 1) t2++;
    }

    if(t1 > t2) cout << 1 << endl;
    else if(t1 < t2) cout << 2 << endl;
    else cout << 0 << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}