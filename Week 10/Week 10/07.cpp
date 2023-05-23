const int mxN = 2e5 + 1;
void solve()
{
    int n;
    cin >> n;
    int mxV = 0, freq[mxN] = {0};
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        mxV = max(mxV, freq[x]);
    }
    cout << n - mxV << '\n';
}