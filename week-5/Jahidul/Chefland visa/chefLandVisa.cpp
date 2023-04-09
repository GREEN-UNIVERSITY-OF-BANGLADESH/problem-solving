// @JahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
	// your code goes here
	optimize();
	int t;
	cin >> t;
	while(t--){
	    int a1, a2, b1, b2, c1, c2;
	    cin >>a1>> a2>> b1>> b2>> c1>> c2;
	    
	    if( a2>=a1 && b2>=b1 && c2<=c1 ) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
 