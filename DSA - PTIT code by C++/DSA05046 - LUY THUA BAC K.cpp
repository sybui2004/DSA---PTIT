/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05046 - LUY THUA BAC K
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

ll mod = 1e9 + 7;

ll C[1005][1005];

void init()
{
    FORU(i, 0, 1004)
    FORU(j, 0, i + 1)
    {
        if (j == 0 || i == j)
            C[i][j] = 1;
        else
            C[i][j] = C[i - 1][j] % mod + C[i - 1][j - 1] % mod;
        C[i][j] %= mod;
    }
}

ll du(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}

ll Pow(ll n, ll k)
{
    if (k == 1)
        return n % mod;
    ll cur = Pow(n, k / 2) % mod;
    if (k & 1)
        return du(du(cur, cur), n);
    return du(cur, cur);
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vl dp(k + 1, 0);
    dp[0] = n % mod;
    n %= mod;

    FORU(i, 1, k + 1)
    {
        dp[i] = (Pow((n + 1) % mod, i + 1) - 1 + mod) % mod;

        FORU(j, 0, i)
        dp[i] = (dp[i] - du(C[i + 1][i - j + 1], dp[j]) + mod) % mod;
        dp[i] = du(dp[i], Pow(i + 1, mod - 2));
    }
    cout << dp[k] << "\n";
}

int main()
{

    fast;
    init();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}