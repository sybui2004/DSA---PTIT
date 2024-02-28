/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
CTDL_003 - PHUONG AN TOI UU
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

int n, v;
vi a, c;
vector<vi> dp;
string ans;

void truyvet(int n, int v)
{
    if (n == 0)
        return;
    if (dp[n][v] == dp[n - 1][v])
    {
        truyvet(n - 1, v);
        ans += "0 ";
    }
    else
    {
        truyvet(n - 1, v - a[n]);
        ans += "1 ";
    }
}
void solve()
{
    cin >> n >> v;
    a.resize(n + 1);
    c.resize(n + 1);
    dp.resize(n + 1, vi(v + 1, 0));

    FORU(i, 1, n + 1)
        cin >> c[i];
    FORU(i, 1, n + 1)
        cin >> a[i];

    FORU(i, 1, n + 1)
    FORD(j, v, 1)
    if (j >= a[i])
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + c[i]);
    else
        dp[i][j] = dp[i - 1][j];

    cout << dp[n][v] << "\n";

    truyvet(n, v);

    cout << ans;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}