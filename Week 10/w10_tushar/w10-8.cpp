#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,count=0;cin>>n;
		string ar;
			cin>>ar;
		
		for(int i=0;i<n;i++){
			if(ar[i]=='0'){
				count++;
			}
		}
		
		 float ans=((float)(120-count))/120*100;
		if(ans<75)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}