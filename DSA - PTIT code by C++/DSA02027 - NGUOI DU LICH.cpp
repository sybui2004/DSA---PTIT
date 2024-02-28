/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02027 - NGUOI DU LICH
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

int n, c[20][20], visited[20], x[20], res, ans, cmin;

void branch_and_bound(int k)
{
    FORU(j, 2, n + 1)
    {
        if (!visited[j])
        {
            x[k] = j;
            visited[j] = 1;
            res += c[x[k - 1]][j];
            if (k == n)
                ans = min(ans, res + c[x[n]][1]);
            else if (res + (n - k + 1) * cmin < ans)
                branch_and_bound(k + 1);
            visited[j] = 0;
            res -= c[x[k - 1]][j];
        }
    }
}
void solve()
{
    cin >> n;
    reset(c);
    reset(x);
    reset(visited);
    ans = 1e9;
    res = 0;
    cmin = 1e6;

    FORU(i, 1, n + 1)
    FORU(j, 1, n + 1)
    {
        cin >> c[i][j];
        if (c[i][j])
            cmin = min(cmin, c[i][j]);
    }

    x[1] = 1;
    visited[1] = 1;
    branch_and_bound(2);

    cout << ans << "\n";
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