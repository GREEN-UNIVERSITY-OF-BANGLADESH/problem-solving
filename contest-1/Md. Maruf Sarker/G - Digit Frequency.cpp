// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/G
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define all(x) x.begin(), x.end()

void solve(){
    string s;
    cin >> s;

    s.find('0') != -1 ? cout << count(all(s), '0') << " " : cout << "0 ";
    s.find('1') != -1 ? cout << count(all(s), '1') << " " : cout << "0 ";
    s.find('2') != -1 ? cout << count(all(s), '2') << " " : cout << "0 ";
    s.find('3') != -1 ? cout << count(all(s), '3') << " " : cout << "0 ";
    s.find('4') != -1 ? cout << count(all(s), '4') << " " : cout << "0 ";
    s.find('5') != -1 ? cout << count(all(s), '5') << " " : cout << "0 ";
    s.find('6') != -1 ? cout << count(all(s), '6') << " " : cout << "0 ";
    s.find('7') != -1 ? cout << count(all(s), '7') << " " : cout << "0 ";
    s.find('8') != -1 ? cout << count(all(s), '8') << " " : cout << "0 ";
    s.find('9') != -1 ? cout << count(all(s), '9') << endl : cout << "0" << endl;
}
int main() {
    solve();
}
