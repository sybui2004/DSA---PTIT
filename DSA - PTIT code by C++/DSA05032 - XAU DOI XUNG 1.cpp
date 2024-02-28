/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05032 - XAU DOI XUNG 1
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
// ans = n - độ dài dãy con chung dài nhất của s và reverse(s)
int dp[105][105];

void solve()
{
    reset(dp);
    string s1;
    cin >> s1;
    string s2 = s1;
    reverse(all(s2));

    int n = s1.size();
    s1 = "*" + s1;
    s2 = "*" + s2;
    FORU(i, 1, n + 1)
    FORU(j, 1, n + 1)
    {
        if (s1[i] == s2[j])
            dp[i][j] = dp[i - 1][j - 1] + 1;
        else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }

    cout << n - dp[n][n] << "\n";
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
