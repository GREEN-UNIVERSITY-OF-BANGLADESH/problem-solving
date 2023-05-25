#include<bits/stdc++.h>
using namespace std;
int freq(int *a, int n, int b) {
    int f = count(a, a + n , b);
    return f;
}
int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, temp = 0, count = 0; cin >> n ;
        int a[n];
        set <pair <int, int>> v;
        vector <int > l;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            v.insert(make_pair(a[i], freq(a, n, a[i])));
        }
        for(auto &m: v){
            l.push_back(m.second);
        }
        sort(l.begin(), l.end());
        for(int i = 0; i< l.size(); i++){
             int prev = l[l.size()-1];
             if(prev == l[i]) count++;
        }
         if(count > 1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
