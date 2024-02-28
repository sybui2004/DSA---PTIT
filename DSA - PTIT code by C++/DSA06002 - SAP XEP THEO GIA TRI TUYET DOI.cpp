/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06002 - SAP XEP THEO GIA TRI TUYET DOI
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

int n, x;

bool cmp(pi a, pi b)
{
    if (abs(a.X - x) == abs(b.X - x))
        return a.Y < b.Y;
    return abs(a.X - x) < abs(b.X - x);
}

void solve()
{
    cin >> n >> x;
    vector<pi> v(n);

    FORU(i, 0, n)
    {
        cin >> v[i].X;
        v[i].Y = i;
    }

    sort(all(v), cmp);

    for (auto &x : v)
        cout << x.X << " ";

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