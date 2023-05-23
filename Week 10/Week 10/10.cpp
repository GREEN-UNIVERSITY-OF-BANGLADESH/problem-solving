void solve()
{
    int v[5];
    for (int i = 0; i < 5; ++i)
        cin >> v[i];
    int x = abs(v[0] - v[1]);
    if (x >= (v[2]*v[4]) && x <= (v[3]*v[4]))
        cout << 1 << '\n';
    else cout << 0 << '\n';
}