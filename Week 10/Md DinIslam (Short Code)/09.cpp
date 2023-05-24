int GCD(int a, int b) {
    if (!b) return a;
    return GCD(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    int v[n];
    int gcd = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        gcd = GCD(gcd, v[i]);
    }
    for (auto &x : v) {
        cout << x / gcd << " ";
    }
    cout << "\n";
}