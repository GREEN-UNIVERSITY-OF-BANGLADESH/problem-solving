 #include <iostream>
#include<iomanip>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        float z=x*y;
        if(x>1000){
            
          cout<<fixed<<setprecision(6)<<z - (z*0.1)<<endl;   
            
        }
        else{
        cout<<fixed<<setprecision(6)<<z<<endl;}
       
        
    }
	// your code goes here
	return 0;
}
q