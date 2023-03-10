// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/GENE01
// Language: cpp / go / c / python
// Date: 2022-12-03
// Difficulty Rating: 826

#include <bits/stdc++.h>
using namespace std;

int main() {
    char fEYE, mEYE;
    cin >> fEYE >> mEYE;

    if(fEYE == 'R' && mEYE == 'R') cout << fEYE << endl;
    else if(fEYE == 'G' && mEYE == 'G') cout << fEYE << endl;
    else if(fEYE == 'B' && mEYE == 'B') cout << fEYE << endl;
    else if(fEYE == 'R' && mEYE == 'B' || fEYE == 'B' && mEYE == 'R') cout << 'R' << endl;
    else if(fEYE == 'R' && mEYE == 'G' || fEYE == 'G' && mEYE == 'R') cout << 'R' << endl;
    else if(fEYE == 'B' && mEYE == 'G' || fEYE == 'G' && mEYE == 'B') cout << 'B' << endl;

    return 0;
}