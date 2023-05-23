void solve()
{
    string s;
    cin >> s;
    int freq[26] = {0}, n = s.size();
    if (n & 1) s.erase(n / 2, 1);
    for (int i = 0; i < n; ++i) {
        if (i < n / 2) freq[s[i] - 'a']++;
        else freq[s[i] - 'a']--;
    }
    for (int i = 0; i < 26; ++i) {
        if (freq[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}