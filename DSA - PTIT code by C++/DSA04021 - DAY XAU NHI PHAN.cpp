/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04021 - DAY XAU NHI PHAN
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

// g[1] = A ;g[2] = B; g[3] = AB; g[4] = BAB
vl g(93);

void init()
{
    g[0] = 0, g[1] = 1;

    FORU(i, 2, 93)
    g[i] = g[i - 1] + g[i - 2];
}
char Try(int n, ll i)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (i <= g[n - 2])
        return Try(n - 2, i);
    return Try(n - 1, i - g[n - 2]);
}

void solve()
{
    int n;
    ll i;
    cin >> n >> i;
    cout << Try(n, i) << "\n";
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