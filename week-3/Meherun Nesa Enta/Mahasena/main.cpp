#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],count=0,num=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	     if(a[i]%2==0)
	     count++;
	     else 
	     num++;
	}
	if(count>num)
	cout<<"READY FOR BATTLE";
	else
	cout<<"NOT READY";
	return 0;
}
