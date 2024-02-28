/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06047 - BO BA SO PYTAGO
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

int check(ll n)
{
    ll p = sqrt(n);
    if (p * p == n)
        return 1;
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vl a(n);
    map<ll, int> m;

    for (ll &i : a)
        cin >> i, m[i] = 1;

    FORU(i, 0, n - 1)
    FORU(j, i + 1, n)
    if (check(a[i] * a[i] + a[j] * a[j]) && m[sqrt(a[i] * a[i] + a[j] * a[j])])
    {
        cout << "YES\n";
        return;
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