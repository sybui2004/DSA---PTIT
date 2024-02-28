/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05010 - DAY CON DAI NHAT CO TONG CHIA HET CHO K
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
    int n, k, x;
    cin >> n >> k;

    int dp[n + 1][k];
    reset(dp);

    FORU(i, 1, k)
    dp[0][i] = -1e9;

    FORU(i, 1, n + 1)
    {
        cin >> x;
        x %= k;
        FORU(j, 0, k)
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - x) % k] + 1);
    }
    cout << dp[n][0] << "\n";
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
