/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06009 - CAP SO TONG BANG K
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

ll tohop(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1 || k == n - 1)
        return n;
    return tohop(n - 1, k - 1) + tohop(n - 1, k);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    int b[k + 5] = {};

    for (int &i : a)
    {
        cin >> i;
        if (i <= k)
            b[i]++;
    }

    ll ans = 0;
    if (!(k & 1) && b[k >> 1] >= 2)
        ans += tohop(b[k >> 1], 2);
    int res = k;
    if (k & 1)
        k++;
    k >>= 1;

    FORU(i, 0, k)
    ans += b[i] * b[res - i];

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