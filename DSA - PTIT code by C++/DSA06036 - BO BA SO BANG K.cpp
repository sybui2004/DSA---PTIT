/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06036 - BO BA SO BANG K
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
    ll k;
    cin >> n >> k;
    vl a(n);

    for (ll &i : a)
        cin >> i;

    sort(all(a));

    FORU(i, 0, n - 2)
    FORU(j, i + 1, n - 1)
    {
        int p = lower_bound(begin(a) + j + 1, end(a), k - a[i] - a[j]) - begin(a);
        if (a[p] == k - a[i] - a[j])
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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