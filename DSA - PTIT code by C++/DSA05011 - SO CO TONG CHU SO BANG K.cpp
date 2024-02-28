/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05011 - SO CO TONG CHU SO BANG K
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

int n, k, dp[105][50005];

void init()
{
    reset(dp);
    FORU(i, 1, 10)
    dp[1][i] = 1;

    FORU(i, 1, 101)
    {
        FORU(j, 0, 10)
        {
            FORU(k, j, 50001)
            {
                dp[i][k] = (dp[i][k] + dp[i - 1][k - j] % MOD) % MOD;
            }
        }
    }
}

void solve()
{
    cin >> n >> k;
    cout << dp[n][k] << "\n";
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    init();

    while (t--)
    {
        solve();
    }
}
