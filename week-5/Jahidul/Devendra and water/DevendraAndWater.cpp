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
	    int z, y, a, b, c;
	    cin >>z>>y>>a>>b>>c;
	    int r = z - y;
	    if(r-a-b-c>=0) cout<<"YES"<<endl;
	    else cout <<"NO"<<endl;
	}
	return 0;
}
 