// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/FLOW011
// Language: cpp / go / c / python
// Date: 2022-11-27
// Difficulty Rating: 823

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        double n, salary;
        cin >> n;

        if(n < 1500){
            salary = n + (n * .1) + (n * .9);
        }else{
            salary = n + 500 + (n * .98);
        }

        printf("%.2f\n", salary);
    }
    return 0;
}