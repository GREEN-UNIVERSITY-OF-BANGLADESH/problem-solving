// In the name of Allah, Most Merciful(পরম করুণাময় আল্লাহর নামে)
// Written by: Md. Maruf Sarker
// Problem Link: https://vjudge.net/contest/548053?fbclid=IwAR3ERzzbZj-eSp5GqvJ1lOgJ6fr4ToauNuuWs6bUbd6cL8ZyQd3XwMZ1-cM#problem/E
// Language: cpp
// Date: 2023-03-15
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

void timeInWords(int h, int m){
/*
5:00 -> five o' clock
5:01 -> one minute past five
5:10 -> ten minutes past five
5:15 -> quarter past five
5:30 -> half past five
5:40 -> twenty minutes to six
5:45 -> quarter to six
5:47 -> thirteen minutes to six
5:28 -> twenty eight minutes past five
*/

    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
    if(m == 00)
        cout << s[h - 1] << " o' clock" << endl;
    else if(m == 01)
        cout << s[m - 1] << " minute past " << s[h - 1] << endl;
    else if(m == 10)
        cout << s[m - 1] << " minutes past " << s[h - 1] << endl;
    else if(m == 15)
        cout << s[m - 1] << " past " << s[h - 1] << endl;
    else if(m == 30)
        cout << s[m - 1] << " past " << s[h - 1] << endl;
    else if(m == 40)
        cout << s[59 - m] << " minutes to " << s[h] << endl;
    else if(m == 45)
        cout << s[59 - m] << " to " << s[h] << endl;
    else if(m == 47)
        cout << s[59 - m] << " minutes to " << s[h] << endl;
    else if(m == 28)
        cout << s[m - 1] << " minutes past " << s[h - 1] << endl;
    else if(m < 30)
        cout << s[m - 1] << " minutes past " << s[h - 1] << endl;
    else if(m > 30)
        cout << s[59 - m] << " minutes to " << s[h] << endl;
}

void solve(){
    int h, m;
    cin >> h >> m;

    timeInWords(h, m);
}
int main() {
    solve();
}
