void solve()
{
    int n;
    cin >> n;
    map<int, int> freq;
    int mxCnt = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        mxCnt = max(mxCnt, freq[x]);
    }
    if (mxCnt == 1) {
        cout << "NO\n";
        return;
    }
    int cnt = 0;
    for (auto &pr : freq) {
        if (pr.second == mxCnt) cnt++;
    }
    if (cnt == 1) cout << "YES\n";
    else cout << "NO\n";
}