#include <iostream>
using namespace std;

int main() {
 
     int t;
     cin>>t;
     
     while(t--)
     {
         int d,n;
         cin>>d>>n;
            while(d--)
            {
                n=(n*(n+1)/2);
            }
            cout<<n<<endl;
     }
    
	return 0;
}