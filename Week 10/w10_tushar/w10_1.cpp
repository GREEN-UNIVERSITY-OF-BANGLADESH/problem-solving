#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,count=0;cin>>n;

		int ar[n];
		for( i=1;i<=n;i++){
			cin>>ar[i];
		}
		

		for(j=n;j>0;j--)
		{
			
			if(ar[j] < 8){
				count = j;
				break;
			}
		}
		cout<<count<<endl;
	}
}
