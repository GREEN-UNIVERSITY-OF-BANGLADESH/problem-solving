#include <iostream>
using namespace std;

int main() {
	int t,k,to;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n>m){
	        k=n-m;
	        
	         to=k*2+m;
	        
	    }else if(m>=n){
	        to=m-n;
	        
	    }
	    cout<<to<<endl;
	    
	}
	return 0;
}
