#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int x,y,z,a;
	    cin>>x>>y>>z;
	    if(x<=3){
	         cout<<((x*y))<<endl;
	    }else if(x%3==0){
	        a=(x*y)+((x/3)-1)*z;
	         cout<<a<<endl;
	    }else{
	        a=(x*y)+(z*(x/3));
	    cout<<a<<endl;
	    }
	    
	}
	return 0;
}
