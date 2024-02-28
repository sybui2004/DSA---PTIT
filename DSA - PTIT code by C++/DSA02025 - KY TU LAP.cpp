/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02025 - KY TU LAP
*/
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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

int n, ans = 1000, cur = 0, trace[15];
bool visited[15];
string a[15];

int cnt(string a, string b)
{
    int dp[300] = {}, dem = 0;
    for (char i : a)
        dp[i]++;
    for (char i : b)
        dem += dp[i];
    return dem;
}

void Try(int x)
{
    FORU(i, 1, n + 1)
    {
        if (!visited[i])
        {
            trace[x] = i;
            visited[i] = true;
            cur += cnt(a[trace[x - 1]], a[i]);

            if (x == n)
                ans = min(ans, cur);
            else if (x < n && cur < ans)
                Try(x + 1);
            visited[i] = false;
            cur -= cnt(a[trace[x - 1]], a[i]);
        }
    }
}

void solve()
{
    cin >> n;

    FORU(i, 1, n + 1)
        cin >> a[i];

    Try(1);
    cout << ans << "\n";
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