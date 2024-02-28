/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05017 - DAY SO BI-TONIC
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
    int n, ans = 0;
    cin >> n;
    vi a(n), L(n, 0), R(n, 0);

    for (int &i : a)
        cin >> i;

    FORU(i, 0, n)
    {
        L[i] = a[i];
        FORU(j, 0, i)
        if (a[i] > a[j] && L[i] < L[j] + a[i])
            L[i] = L[j] + a[i];
    }

    FORD(i, n - 1, 0)
    {
        R[i] = a[i];
        FORU(j, i + 1, n)
        if (a[i] > a[j] && R[i] < R[j] + a[i])
            R[i] = R[j] + a[i];

        ans = max(ans, L[i] + R[i] - a[i]);
    }

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