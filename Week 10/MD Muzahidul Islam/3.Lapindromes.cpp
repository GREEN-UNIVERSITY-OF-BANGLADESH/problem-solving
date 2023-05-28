#include<bits/stdc++.h>
using namespace std;
bool isEven(int a) {
    if (a % 2 == 0) return true;
    else return false;
}
int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string firstHalf, secondHalf;
        if (isEven(s.size())) {
            for (int i = 0, j = (s.size() / 2); i < (s.size() / 2), j < s.size(); i++, j++) {
                firstHalf += s[i];
                secondHalf += s[j];
            }
        } else {
            for (int i = 0, j = (s.size() / 2) + 1; i < (s.size() / 2), j < s.size(); i++, j++) {
                firstHalf += s[i];
                secondHalf += s[j];
            }
        }
        sort(firstHalf.begin(), firstHalf.end());
        sort(secondHalf.begin(), secondHalf.end());
        if (firstHalf == secondHalf) cout << "YES\n";
        else cout << "NO\n";
    }
}
