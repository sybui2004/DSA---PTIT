/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02008 - CHON SO TU MA TRAN VUONG CAP N
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

int n, k;

vector<vi> ans;

void solve()
{
    cin >> n >> k;
    vector<vi> a(n, vi(n));
    vi b(n);

    FORU(i, 0, n)
    {
        b[i] = i;
        FORU(j, 0, n)
            cin >> a[i][j];
    }

    do
    {
        int res = 0;

        FORU(i, 0, n)
        res += a[i][b[i]];

        if (res == k)
            ans.pb(b);
    } while (next_permutation(all(b)));

    cout << ans.size() << "\n";

    for (vi i : ans)
    {
        FORU(j, 0, n)
            cout << i[j] + 1 << " ";
        cout << "\n";
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