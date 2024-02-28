/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA_P039 - CHON O 1
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
int a[25][25];
int dp[1 << 20];

void solve()
{
    reset(dp);
    cin >> n;
    FORU(i, 1, n + 1)
    FORU(j, 1, n + 1)
        cin >> a[i][j];

    int m = (1 << n) - 1;
    FORU(i, 0, m + 1)
    {
        int cnt = 0;
        FORU(j, 1, n + 1)
        if (i >> (j - 1) & 1)
            cnt++;
        FORU(j, 1, n + 1)
        if (i >> (j - 1) & 1)
            dp[i] = max(dp[i], dp[i ^ (1 << (j - 1))] + a[cnt][j]);
    }

    cout << dp[m] << "\n";
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