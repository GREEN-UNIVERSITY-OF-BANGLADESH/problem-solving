#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char a;
	    cin>>a;
	    if(a=='B' || a=='b')
	    cout<<"BattleShip"<<endl;
	    else if(a=='c' || a=='C')
	    cout<<"Cruiser"<<endl;
	    else if(a=='D' || a=='d')
	    cout<<"Destroyer"<<endl;
	    else if(a=='f' || a=='F')
	    cout<<"Frigate"<<endl;
	}
	return 0;
}
