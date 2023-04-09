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
	    int a, b;
	    cin >> a >> b;
	    
	    int to = a+b;
	    
	    if( to< 3 ) cout<<"1"<<endl;
	    if( to<= 10 && to>=3 ) cout<<"2"<<endl;
	    if( to<= 60 && to>=11 ) cout<<"3"<<endl;
	    if( to> 60 ) cout<<"4"<<endl;
	    
	    
	   
	}

    
	return 0;
}
 