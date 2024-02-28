/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05042 - DAY CON LIEN TIEP CO TONG BANG K
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
    ll k;
    cin >> k;
    vl a(n), dp(n + 1, 0);
    int cnt0 = 0;
    dp[0] = 0;
    FORU(i, 1, n + 1)
    {
        cin >> a[i - 1];
        if (a[i - 1] == 0)
            cnt0++;
        dp[i] = a[i - 1] + dp[i - 1];
    }

    if (k == 0 && cnt0 == 0)
    {
        cout << "NO\n";
        return;
    }

    FORU(i, 0, n + 1)
    {
        int p = lower_bound(all(dp), dp[i] + k) - begin(dp);
        if (dp[p] == dp[i] + k)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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