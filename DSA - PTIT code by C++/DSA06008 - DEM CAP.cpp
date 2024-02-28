/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06008 - DEM CAP
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi x(n), y(m);
    int dem = 0, dem1 = 0, dem2 = 0, dem3 = 0;
    for (int &i : x)
    {
        cin >> i;
        if (i == 0)
            dem++;
        if (i == 1)
            dem1++;
        if (i == 2)
            dem2++;
        if (i == 3)
            dem3++;
    }
    for (int &i : y)
        cin >> i;
    sort(all(x));
    sort(all(y));
    ll ans = 0;
    int j = 0;
    while (j < m && y[j] == 0)
        j++;
    ans += 1ll * j * (n - dem);
    int pos = 0;
    while (pos < n && x[pos] <= 1)
        pos++;
    FORU(i, j, m)
    {
        if (y[i] == 2 || y[i] == 4)
            ans += 1ll * dem3;
        else if (y[i] == 1)
            ans += 1ll * (n - dem - dem1);
        else if (y[i] == 3)
            continue;
        else
        {
            while (pos < n && 1.0 * y[i] * log(x[pos]) > 1.0 * x[pos] * log(y[i]))
                pos++;
            ans += 1ll * (pos - dem - dem1);
        }
    }
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