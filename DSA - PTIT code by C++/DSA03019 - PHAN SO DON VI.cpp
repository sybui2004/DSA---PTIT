/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03019 - PHAN SO DON VI
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

void solve()
{
    ll p, q;
    cin >> p >> q;

    vl a;
    while (q % p)
    {
        ll res = q / p + 1;
        a.pb(res);
        p = p * res - q;
        q *= res;
    }

    a.pb(q / p);
    cout << "1/" << a[0];

    FORU(i, 1, a.size())
        cout << " + "
             << "1/" << a[i];

    cout << "\n";
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