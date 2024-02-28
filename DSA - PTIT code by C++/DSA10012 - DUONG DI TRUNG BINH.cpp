/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10012 - DUONG DI TRUNG BINH
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

int v, e;

void solve()
{
    cin >> v >> e;

    vector<vi> dp(v + 1, vi(v + 1, 1e9));
    FORU(i, 1, v + 1)
    dp[i][i] = 0;

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        dp[x][y] = 1;
    }

    FORU(k, 1, v + 1)
    FORU(i, 1, v + 1)
    FORU(j, 1, v + 1)
    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);

    double l = 0;
    int cnt = 0;

    FORU(i, 1, v + 1)
    FORU(j, 1, v + 1)
    {
        if (dp[i][j] > 0 && dp[i][j] < 1e9)
        {
            l += dp[i][j];
            cnt++;
        }
    }

    cout << setprecision(2) << fixed << l / cnt << "\n";
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