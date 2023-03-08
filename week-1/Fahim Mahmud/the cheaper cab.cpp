#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	while(t--){
	    int x,y ;
	    cin>>x>>y ;
	    if(x>y) cout<<"SECOND"<<endl ;
	    else if(x<y) cout<<"FIRST"<<endl ;
	    else
	    cout<<"ANY"<<endl ;
	}
	return 0;
}