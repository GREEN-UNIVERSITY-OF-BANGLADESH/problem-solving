// Solution 01

const int mxN = 1e5 + 10;
int cnt[mxN];
void solve()
{
    memset(cnt, 0, sizeof(cnt));
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        cnt[v[i]]++;
    }
    for (auto &x : v) {
        if (cnt[x] & 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

// Solution 02

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto &pr : m) {
        if (pr.second & 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}