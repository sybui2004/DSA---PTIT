/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06046 - CHENH LECH NHO NHAT
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
    vi a(n);

    for (int &i : a)
        cin >> i;

    sort(all(a));

    int ans = 1e9;

    FORU(i, 0, n - 1)
    ans = min(ans, abs(a[i] - a[i + 1]));

    cout << ans << "\n";
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