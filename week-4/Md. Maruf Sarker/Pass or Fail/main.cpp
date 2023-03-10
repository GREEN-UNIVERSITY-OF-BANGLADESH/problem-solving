// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/submit/PASSORFAIL
// Language: cpp / go / c / python
// Date: 2022-10-09
// Difficulty Rating: 730

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--) {
    int n, x, p;
    cin >> n >> x >> p;
    
    int incorrect = n - x;
    int correct = x * 3;
    int mark = correct - incorrect;
    
    if(mark >= p) cout << "PASS\n";
    else cout << "FAIL\n";
}
return 0;
}