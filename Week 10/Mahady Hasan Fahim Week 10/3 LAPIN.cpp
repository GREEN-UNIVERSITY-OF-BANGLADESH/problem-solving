#include <iostream>
using namespace std;

void fahim(){
    int t;
    cin>>t;
    while(t--){
       
        string s;
        cin>>s;
        int n=s.size();
      
         int cou=0;
        if(n%2!=0){
            s[(n/2)]='0';
            
        }
        int l=n;
        for(int i=0;i<=n/2;i++){
            
            for(int j=n/2;j<n;j++){
               if(s[i]==s[j]){
                   s[i]='0';
                   s[j]='0';
               } 
            }
           
        }
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                cou++;
            }
        }
            if(cou==0){
                
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
            
        }
    }


int main() {
	fahim();
	return 0;
}
