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
	    int a, b, c;
	    cin >> a >> b >> c;
	    int pb = a+b;
	    
	    if( pb > c ) cout<<"TRAIN"<<endl;
	    else if( pb == c ) cout<<"EQUAL"<<endl;
	    else cout<<"PLANEBUS"<<endl;
	}
	return 0;
}
 