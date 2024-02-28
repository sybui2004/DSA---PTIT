/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05037 - CHU SO SAP XEP TANG DAN
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

vector<vi> dp(101, vi(101, 0));
// dp[i][j] là số các số có i chữ số và bắt đầu bằng số j

void process()
{
    FORU(i, 0, 10)
    dp[1][i] = 1;

    FORU(i, 2, 101)
    FORU(j, 0, 10)
    FORU(k, 0, j + 1)
    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
}

void solve()
{
    int n;
    cin >> n;

    int ans = 0;

    FORU(i, 0, 10)
    ans = (ans + dp[n][i]) % MOD;

    cout << ans << "\n";
}

int main()
{
    fast;
    process();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}