#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,max=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>max){
	            max=a[i];
	        }
	    }
        int size=max+1;
	   int ar[size]={0};
	   for(int i=0;i<n;i++){
	       ar[a[i]]++;
	   }
	
	   sort(ar,ar+size);
   
	   if(ar[size-1]>ar[size-2]){
	       cout<<"YES"<<endl;
	   }else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
