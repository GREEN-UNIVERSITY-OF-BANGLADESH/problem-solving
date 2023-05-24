#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	int a[19];
	while(t--){
	    cin>>n;
	
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	       
	    }
	       for(int i=n-1;i>=0;i--){
	        if(a[i]<=7){
	            cout<<i+1;
	            break;
	        }
	       
	    }
	 cout<<endl;
	    
	}
	return 0;
}
