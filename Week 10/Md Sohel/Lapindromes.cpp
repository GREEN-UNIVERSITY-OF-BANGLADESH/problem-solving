#include <iostream>
using namespace std;

int freeQuency(char c, string s){
    int free = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            free++;
        }
    }
    
    return free;
}

int main() {
	// your code goes here
	int t;
	string s;
	
	cin >> t;
	while(t--){
	    cin >> s;
	    int length = s.length();
	    int mid = length / 2;
	    bool palindrom = true;
	    
	    string subOne = s.substr(0, mid);
	    string subTwo = s.substr(length - mid, mid);
	    
	    
	    for(int i = 0; i < mid; i++){
	        
	        if(freeQuency(subOne[i], subOne) != freeQuency(subOne[i], subTwo)){
	             palindrom = false;
	             break;
	        }
	        
	        if(freeQuency(subTwo[i], subOne) != freeQuency(subTwo[i], subTwo)){
	             palindrom = false;
	             break;
	        }
	        
	    }
	    
	    
	    if(palindrom == true){
	        cout << "YES\n";
	    }else {
	        cout << "NO\n";
	    }
	    
	    
	}
	return 0;
}
