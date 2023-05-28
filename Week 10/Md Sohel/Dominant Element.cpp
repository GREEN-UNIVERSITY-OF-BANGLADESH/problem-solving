#include <iostream>
using namespace std;

#include<set>

int main() {
	// your code goes here
	
	int t, n;
	
	cin >> t;
	while(t--){
	    multiset <int> arr;
	    int n;
	    cin >> n;
	    
	    while(n--){
	        int d;
	        cin >> d;
	        arr.insert(d);
	    }
	    
	    multiset<int>::iterator a,it;
	    
	    a = arr.begin();
	    int max = 0;
	    bool dominate = true;
	    int count = 0;
	    
	    for(it = arr.begin(); it != arr.end(); it++){
	       
	        if(*it != *a){
	            
	            if(max == count){
	                dominate = false;
	            }else if(max < count){
	                max = count;
	                dominate = true;
	            }
	            
                a = it;
	            count = 0;
	        }
	        count++;
	    }
	    
	    
	    if(count == max){
	        dominate = false;
	    }else if(count > max){
	        dominate = true;
	    }
	    
	
	    if(dominate == true){
	        cout << "YES\n";
	    }else {
	        cout << "NO\n";
	    }
	}
	
	
	
	return 0;
}
