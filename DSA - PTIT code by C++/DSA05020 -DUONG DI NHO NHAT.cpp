/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05020 - DUONG DI NHO NHAT
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
    vector<vi> a(n, vi(m, 0));

    for (auto &i : a)
        for (int &j : i)
            cin >> j;

    vector<vi> dp(n, vi(m, 0));

    FORU(i, 0, n)
    FORU(j, 0, m)
    {
        dp[i][j] = a[i][j];
        if (i == 0 && j == 0)
            continue;
        else if (i == 0 && j > 0)
            dp[i][j] += dp[i][j - 1];
        else if (i > 0 && j == 0)
            dp[i][j] += dp[i - 1][j];
        else
            dp[i][j] += min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
    }

    cout << dp[n - 1][m - 1] << "\n";
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