#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    if(a+b>=x){
	        cout<<"YES"<<endl;
	    }else  if(b+c>=x){
	        cout<<"YES"<<endl;
	    }else  if(a+c>=x){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
