/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05012 - TO HOP C(n, k)
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

ll f[1005][1005];
void init()
{
    FORU(i, 1, 1001)
    f[0][i] = 0;

    FORU(i, 1, 1001)
    {
        f[1][i] = i;
        f[i][i] = 1;
    }

    FORU(i, 2, 1001)
    {
        FORU(j, 2, i + 1)
        f[j][i] = (f[j - 1][i - 1] % MOD + f[j][i - 1] % MOD) % MOD;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << f[k][n] << "\n";
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