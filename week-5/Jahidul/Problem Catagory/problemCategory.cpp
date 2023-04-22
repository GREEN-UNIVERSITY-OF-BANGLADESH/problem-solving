// @JahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
	// your code goes here
	optimize();
	int t;
	cin >> t;
	while(t--){
	    int a;
	    cin >>a;
	    if(a>=1 && a<100) cout<<"Easy"<<endl;
	    if(a>=100 && a<200) cout<<"Medium"<<endl;
	    if(a>=200 && a<=300) cout<<"Hard"<<endl;
	}
	return 0;
}
 