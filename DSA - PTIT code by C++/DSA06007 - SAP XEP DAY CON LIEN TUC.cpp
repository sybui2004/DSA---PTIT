/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06007 - SAP XEP DAY CON LIEN TUC
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
    vi v(n), v1(n);
    FORU(i, 0, n)
        cin >> v[i],
        v1[i] = v[i];
    sort(all(v));
    int l = 0, r = 0;
    FORU(i, 0, n)
    if (v[i] != v1[i])
    {
        l = i;
        break;
    }

    FORD(i, n - 1, 0)
    if (v[i] != v1[i])
    {
        r = i;
        break;
    }

    cout << l + 1 << " " << r + 1 << "\n";
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