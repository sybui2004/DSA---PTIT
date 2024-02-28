/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSAKT055 - BAI TOAN CAI TUI 0-1
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
    int n, v;
    cin >> n >> v;
    vi a(n), c(n), dp(v + 1);

    for (int &i : a)
        cin >> i;
    for (int &i : c)
        cin >> i;

    FORU(i, 0, n)
    FORD(j, v, 1)

    if (j >= a[i])
        dp[j] = max(dp[j], dp[j - a[i]] + c[i]);

    cout << dp[v] << "\n";
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