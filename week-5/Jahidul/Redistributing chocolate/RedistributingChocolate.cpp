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
	    int x, y, z;
	    cin >> x >> y >> z;
	    int to = x + y+ z;
	    if( to>=6  ) cout << "YES" << endl
	    else cout << "NO" << endl;
	}

    
	return 0;
}
 