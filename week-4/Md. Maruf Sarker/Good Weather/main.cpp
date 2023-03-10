// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/GOODWEAT
// Language: cpp / go / c / python
// Date: 2022-11-20
// Difficulty Rating: 835

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int arr[7];
        for(int i = 0; i < 7; i++) cin >> arr[i];

        int sunnt = 0, rainy = 0;
        for(int i = 0; i < 7; i++) {
            if(arr[i] == 1) sunnt++;
            else rainy++;
        }
        (sunnt > rainy) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}