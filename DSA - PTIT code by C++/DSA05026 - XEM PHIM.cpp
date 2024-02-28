/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05026 - XEM PHIM
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
    int c, n;
    cin >> c >> n;
    vi w(n), dp(c + 1), b(n);

    for (int &i : w)
        cin >> i;

    FORU(i, 0, n)
    FORD(j, c, 1)
    if (j >= w[i])
        dp[j] = max(dp[j], dp[j - w[i]] + w[i]);

    cout << dp[c];
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