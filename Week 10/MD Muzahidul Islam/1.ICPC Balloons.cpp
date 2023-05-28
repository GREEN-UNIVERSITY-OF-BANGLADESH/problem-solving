#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int a,i, n, count = 0; cin>>n;
        for( i = 0; i<n; i++){
            cin>>a;
            if(a<8){
                count = i;
            }
        }
        cout<<count+1<<endl;  
    }
}