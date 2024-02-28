/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04035 - TINH LUY THUA
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

int main()
{
    fast;
    ll a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) return 0;
		cout << Pow (a, b) << "\n";
	}
}