// @JahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n';

int main() {
	// your code goes here
	optimize();
	int t;
	cin>>t;
	while(t--){
	    int h, m;
	    cin >> m >> h;
	    int b = m/(h*h);
	    if( b <= 18 ) cout << 1 << endl
	    else if( b>=19 && b<=24) cout << 2 << endl
	    else if( b>=25 && b<=29) cout << 3 << endl
	    else cout << 4 << endl;
	}
	
	
	return 0;
}
 