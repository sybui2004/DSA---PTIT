/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06044 - SAP XEP CHAN LE
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
    vi a(n), b, c;

    FORU(i, 0, n)
    {
        cin >> a[i];
        if (i & 1)
            b.pb(a[i]);
        else
            c.pb(a[i]);
    }

    sort(all(c));

    sort(all(b), greater<int>());

    int i1 = 0, i2 = 0, i = 0;
    while (i < n)
    {
        if (i & 1)
        {
            cout << b[i1] << " ";
            i1++;
        }
        else
        {
            cout << c[i2] << " ";
            i2++;
        }
        i++;
    }
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