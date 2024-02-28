/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05016 - SO UGLY
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

ll f[10005];
void init()
{
    f[1] = 1;
    ll i2 = 1, i3 = 1, i5 = 1, val2 = 2, val3 = 3, val5 = 5;
    for (ll i = 2; i <= 10000; i++)
    {
        ll tmp = min(val2, min(val3, val5));
        f[i] = tmp;
        if (tmp == val2)
        {
            i2++;
            val2 = f[i2] * 2;
        }
        if (tmp == val3)
        {
            i3++;
            val3 = f[i3] * 3;
        }
        if (tmp == val5)
        {
            i5++;
            val5 = f[i5] * 5;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << f[n] << "\n";
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