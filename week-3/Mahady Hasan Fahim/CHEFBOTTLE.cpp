#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    if(k/x>n){
	        cout<<n<<endl;
	    }else{
	        
	    cout<<k/x<<endl;
	    }
	}
	return 0;
}
