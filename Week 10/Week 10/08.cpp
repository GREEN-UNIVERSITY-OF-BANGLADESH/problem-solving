void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    float zeroCnt = 0;
    for (int i = 0; i < n; ++i)
        if (!(s[i] - '0')) zeroCnt++;
    float ans = ((120.0 - zeroCnt) / 120.0) * 100.0;
    cout << ((ans < 75) ? "NO\n" : "YES\n");
}