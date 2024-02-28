/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06019 - SAP XEP THEO SO LAN XUAT HIEN
*/
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define pb push_back
#define ll long long
#define FORU(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define reset(a) memset(a, 0, sizeof(a))
#define mii map<int, int>
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

bool cmp(pi a, pi b)
{
    if (a.Y == b.Y)
        return a.X < b.X;
    return a.Y > b.Y;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vector<pi> v;
    mii m;

    for (int &i : a)
    {
        cin >> i;
        m[i]++;
    }

    for (int i : a)
    {
        if (m[i])
        {
            v.pb({i, m[i]});
            m[i] = 0;
        }
    }

    sort(all(v), cmp);

    for (auto &x : v)
    {
        FORU(i, 0, x.Y)
        cout << x.X << " ";
        x.Y = 0;
    }

    cout << "\n";
}

int main()
{
    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}