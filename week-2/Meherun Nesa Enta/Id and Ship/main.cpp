#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	char n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    if(n=='B'|| n=='b')
	    cout<<"BattleShip"<<endl;
	    else if(n=='C'||n == 'c')
	    cout<<"Cruiser"<<endl;
	    else if(n=='D'||n=='d')
	    cout<<"Destroyer"<<endl;
	    else
	    cout<<"Frigate"<<endl;
	}
	return 0;
}
