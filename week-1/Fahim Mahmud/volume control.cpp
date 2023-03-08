#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	     int x, y ;
	     cin>>x>>y ;
	     if(x>y){
	     int z = x-y ;
	     cout<<z<<endl ; }
	     else{
	     int k= y-x ;
	     cout<<k<<endl ;
	     }
	}
	return 0;

}