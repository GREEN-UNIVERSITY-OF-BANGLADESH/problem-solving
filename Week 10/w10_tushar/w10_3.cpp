#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int x = s.size() / 2;
		string s1, s2;
		if (s.size() % 2 == 0) {
			for (int i = 0, j = x; i < x, j < s.size(); i++, j++)
			{
				s1 += s[i];
				s2 += s[j];
			}
		}
		else
			for(int i = 0, j = x + 1; i < x, j < s.size(); i++, j++) {
			s1 += s[i];
			s2 += s[j];
		}
		
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if (s1 == s2)cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}