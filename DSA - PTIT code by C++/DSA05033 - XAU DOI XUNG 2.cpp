/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05033 - XAU DOI XUNG 2
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
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    vector<vi> dp(n + 1, vi(n + 1, 0));

    FORD(i, n, 1)
    {
        FORU(j, i, n + 1)
        {
            if (i == j)
            {
                dp[i][j] = 1;
                continue;
            }
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    cout << n - dp[1][n] << "\n";
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