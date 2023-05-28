#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        string l;cin>>l;
        int count = x;
        vector <int> s;
        s.push_back(x);
        for( int i = 0; i< n; i++){ 
            if(l[i] == 'L') count--;
               else count++;
            s.push_back(count);
        }
        sort(s.begin(), s.end());
        s.resize(unique(s.begin(), s.end())-s.begin());
        cout<<s.size()<<endl;      
    }
}
