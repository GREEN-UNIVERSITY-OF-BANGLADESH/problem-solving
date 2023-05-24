void solve()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    set<int> disP;
    disP.insert(x);
    for (auto &ch : s) {
        if (ch == 'R') x++;
        else x--;
        disP.insert(x);
    }
    cout << disP.size() << '\n';
}