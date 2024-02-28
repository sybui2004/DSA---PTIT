/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03024 - LUA CHON TOI UU
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

ll mod = 1e9 + 7;

bool cmp(pi a, pi b)
{
    if (a.Y == b.Y)
        return a.X < b.X;
    return a.Y < b.Y;
}

void solve()
{
    int n;
    cin >> n;
    vector<pi> a(n);

    for (auto &i : a)
        cin >> i.X >> i.Y;

    sort(all(a), cmp);

    int ans = 0, tmp = a[0].Y;

    FORU(i, 1, n)
    {
        if (a[i].X >= tmp)
        {
            ans++;
            tmp = a[i].Y;
        }
    }

    cout << ans + 1 << "\n";
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