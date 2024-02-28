/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05019 - HINH VUONG LON NHAT
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
    int a[n + 1][m + 1], dp[n + 1][m + 1];

    FORU(i, 1, n + 1)
    FORU(j, 1, m + 1)
    cin >> a[i][j];

    reset(dp);

    FORU(i, 1, n + 1)
    FORU(j, 1, m + 1)
    dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];

    int ans = 0;

    FORU(h1, 1, n + 1)
    FORU(c1, 1, m + 1)
    FORU(i, 1, min(n + 1 - h1, m + 1 - c1))
    if (dp[h1 + i][c1 + i] - dp[h1 - 1][c1 + i] - dp[h1 + i][c1 - 1] + dp[h1 - 1][c1 - 1] == (i + 1) * (i + 1))
        ans = max(ans, i + 1);

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