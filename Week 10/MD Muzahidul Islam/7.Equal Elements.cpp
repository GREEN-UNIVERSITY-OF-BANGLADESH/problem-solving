#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        vector <int> b(n,0);
        for(int i = 0; i< n; i++){
            int num; cin>>num;
            b[num]++;
        }
        sort(b.begin(), b.end());
        b.resize(unique(b.begin(), b.end())-b.begin());
        cout<<n-b[b.size()-1]<<endl;
    }
}
