#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
 {
     int x;
     cin>>x;
     
     if(x%4==1)
     cout<<"East"<<endl;
     else if(x%4==2)
     cout<<"South"<<endl;
     else if(x%4==3)
     cout<<"West"<<endl;
     else 
     cout<<"North"<<endl;
 }
}