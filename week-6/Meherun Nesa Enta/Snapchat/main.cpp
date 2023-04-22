#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,count_max=0;
	     cin>>n;
	    int a[n],b[n];
	   
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>0 && b[i]>0){
	        count++;
	        count_max = max(count,count_max);
	        }
	        else
	        count =0;
	    }
	    cout<<count_max<<endl;
	}
	return 0;
}