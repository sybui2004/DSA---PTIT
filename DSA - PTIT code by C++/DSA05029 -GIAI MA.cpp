/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05029 -GIAI MA
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

int n;

void solve()
{
    string s;
    cin >> s;
    n = s.size();
    if (s[0] == '0')
    {
        cout << "0\n";
        return;
    }
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    ll dp[n + 1] = {};

    dp[0] = dp[1] = 1;

    FORU(i, 2, n + 1)
    {

        if (s[i - 1] == '0')
        {
            if (s[i - 2] >= '3')
            {
                cout << "0\n";
                return;
            }

            dp[i] = 0;
        }
        else
            dp[i] = dp[i - 1];

        int res = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
        dp[i] += ((res >= 10 && res <= 26) ? dp[i - 2] : 0);
    }

    cout << dp[n] << "\n";
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