/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10009 - FLOYD
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

int v, e, st, en;

void solve()
{
    cin >> v >> e;

    vector<vi> dp(v + 1, vi(v + 1, 1e9));
    FORU(i, 1, v + 1)
    dp[i][i] = 0;

    while (e--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        dp[x][y] = dp[y][x] = w;
    }

    FORU(k, 1, v + 1)
    FORU(i, 1, v + 1)
    FORU(j, 1, v + 1)
    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);

    int q;
    cin >> q;
    while (q--)
    {
        cin >> st >> en;
        cout << dp[st][en] << "\n";
    }
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