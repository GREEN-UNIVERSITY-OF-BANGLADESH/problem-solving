void solve()
{
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 8) ans = i;
    }
    cout << ans + 1 << '\n';
}