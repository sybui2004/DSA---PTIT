/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSAKT110 - NHA KHONG KE NHAU
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
    int n;
    cin >> n;
    vi a(n), dp(n);

    for (int &i : a)
        cin >> i;

    if (n == 1)
    {
        cout << dp[0] << "\n";
        return;
    }
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);

    FORU(i, 2, n)
    dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);

    cout << dp[n - 1] << "\n";
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