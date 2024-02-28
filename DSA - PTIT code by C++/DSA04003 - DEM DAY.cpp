/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04003 - DEM DAY
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

ll mod = 123456789;

ll Mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}

ll Pow(ll x, ll y)
{
    ll result = 1;
    x = x % mod;

    while (y > 0)
    {
        if (y & 1)
            result = Mul(result, x);
        y = y >> 1;
        x = Mul(x, x);
    }

    return result;
}

ll n;
// 2^(n-1)
void solve()
{
    cin >> n;
    if (n == 1)
        cout << "1\n";
    else
        cout << Pow(1ll * 2, n - 1) << "\n";
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