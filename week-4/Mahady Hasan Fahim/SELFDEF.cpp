#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int b;
	    int c=0;
	    cin>>b;
	    int a[b];
	    for(int i=0;i<b;i++){
	        cin>>a[i];
	        if(a[i]>=10&&a[i]<=60){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
