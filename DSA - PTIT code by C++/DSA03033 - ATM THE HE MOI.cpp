/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03033 - ATM THE HE MOI
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

ll a[4] = {5000, 3000, 2000, 1000};
int c;
ll w;
vl mon;

void init()
{
    int x = c;
    while (x > -1)
    {
        FORU(i, 0, 4)
        mon.pb(a[i] * pow(10, x));
        x--;
    }
}

void solve()
{
    mon.clear();
    cin >> w >> c;

    if (w % 1000)
    {
        cout << "0\n";
        return;
    }

    init();
    vector<pair<ll, ll>> res;

    ll cnt1 = 0, cnt2 = 1;

    for (ll i : mon)
    {
        res.pb({i, w / i});
        cnt1 += w / i;
        w %= i;
    }

    FORD(i, c, 0)
    {
        vector<pair<ll, ll>> ans;

        for (auto x : res)
        {
            if (to_string(x.X).size() == i + 4)
                ans.push_back(x);
        }

        ll a = pow(10, i), b = INT_MAX, c = INT_MAX, m = 5000 * a, n = 3000 * a, p = 1000 * a;

        for (auto x : ans)
        {
            if (x.X == m || x.X == p)
                b = min(b, x.Y);
            if (x.X == n || x.X == p)
                c = min(c, x.Y);
        }

        if (b + c >= 1)
            cnt2 *= (b + c + 1);
    }

    cout << cnt1 << " " << cnt2 << "\n";
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
