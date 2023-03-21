// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/TWORANGES
// Language: cpp / go / c / python
// Date: 2023-02-06
// Difficulty Rating: 918

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

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    pair<int, int> p1, p2;
    p1.first = a;
    p1.second = b;
    p2.first = c;
    p2.second = d;

    vector<pair<int, int>> v;
    v.push_back(p1);
    v.push_back(p2);

    sort(v.begin(), v.end());


    if(a == b and b == c and c == d){
        cout << 1 << endl;
    }else if(v[1].first <= v[0].second){
        int mx = max(v[0].second, v[1].second);
        int mn = min(v[0].first, v[1].first);
        cout << mx - mn + 1 << endl;
    }else{
        int first = b - a + 1;
        int second = d - c + 1;
        cout << first + second << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}