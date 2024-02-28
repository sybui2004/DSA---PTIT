/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04008 - SO FIBONACCI THU N
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

void fib(ll n, ll &x, ll &y)
{
    if (n == 0)
    {
        x = 0;
        y = 1;
        return;
    }

    if (n % 2)
    {
        fib(n - 1, y, x);
        y = (y + x) % mod;
    }
    else
    {
        ll a, b;
        fib(n / 2, a, b);
        y = (a * a + b * b) % mod;
        x = (a * b + a * (b - a + mod)) % mod;
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 1;
    fib(n, x, y);
    cout << x << "\n";
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