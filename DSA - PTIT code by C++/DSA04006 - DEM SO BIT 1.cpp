/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04006 - DEM SO BIT 1
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

ll a[55];

int process(int pos, ll n, ll i)
{
    if (pos == 1)
        return (n % 2);
    ll tmp = a[pos - 1];
    if (i == tmp + 1)
        return (n % 2);
    else if (i < tmp + 1)
        return process(pos - 1, n / 2, i);
    return process(pos - 1, n / 2, i - tmp - 1);
}

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    reset(a);
    a[1] = 1;
    ll tmp = n;
    n /= 2;
    int pos = 2;

    while (n)
    {
        a[pos] = a[pos - 1] * 2 + 1;
        n /= 2;
        pos++;
    }

    pos--;
    ll ans = 0;
    for (ll i = l; i <= r; ++i)
        ans += process(pos, tmp, i);
    cout << ans << "\n";
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