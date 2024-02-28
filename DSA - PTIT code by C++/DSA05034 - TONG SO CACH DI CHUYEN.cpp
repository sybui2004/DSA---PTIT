/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05034 - TONG SO CACH DI CHUYEN
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

ll f[100005];
int n, k;

void solve()
{
    cin >> n >> k;

    f[0] = f[1] = 1;
    FORU(i, 2, n + 1)

    f[i] = ((2 * (f[i - 1] % MOD)) % MOD - ((i - k - 1 >= 0) ? f[i - k - 1] : 0) % MOD + MOD) % MOD;

    cout << f[n] << "\n";
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