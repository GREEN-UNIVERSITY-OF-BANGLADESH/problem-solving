// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/problems/CHEFBOTTLE
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 662

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n, x, k;
        cin >> n >> x >> k;

        ll result = (n < (k / x)) ? n : (k / x);
        cout << result << endl;
    }
}