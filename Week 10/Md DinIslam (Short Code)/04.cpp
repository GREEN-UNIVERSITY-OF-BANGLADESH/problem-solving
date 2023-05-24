// Solution 01

void solve()
{
    char ch = 'a';
    map<char, int> ms;
    ll sum = 0;
    for (int i = 0; i < 26; ++i) {
        int x;
        cin >> x;
        sum += x, ms[ch++] = x;
    }
    string s;
    cin >> s;
    set<char> disChar;
    for (auto &x : s)
        disChar.insert(x);
    for (auto &x : disChar) {
        sum -= ms[x];
    }
    cout <<  sum  << '\n';
}

// Solution 02

void solve()
{
    int v[26];
    for (int i = 0; i < 26; ++i) {
        cin >> v[i];
    }
    string s;
    cin >> s;
    set<char> disChar;
    int sum = 0;
    for (auto &x : s) disChar.insert(x);
    for (int i = 0; i < 26; ++i) {
        if (disChar.find(char(i + 'a')) == disChar.end())
            sum += v[i];
    }
    cout << sum << '\n';
}