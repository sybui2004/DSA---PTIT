/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04002 - LUY THUA DAO
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

ll Mul(ll a, ll b)
{
    return (a * b) % mod;
}

ll Pow(ll n, ll k)
{
    if (k == 0)
        return 1;
    ll tmp = Pow(n, k / 2);
    if (k % 2)
        return Mul(Mul(tmp, tmp), n);
    return Mul(tmp, tmp);
}

void solve()
{
    ll n, k;
    cin >> n;
    k = n;
    ll tmp = 0;
    while (k > 0)
    {
        tmp = tmp * 10 + k % 10;
        k /= 10;
    }
    cout << Pow(n, tmp) << "\n";
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