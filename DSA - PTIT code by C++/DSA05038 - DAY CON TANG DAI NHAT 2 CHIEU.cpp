/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05038 - DAY CON TANG DAI NHAT 2 CHIEU
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

vector<mii> dp;
mii::iterator i1, i2;

int check(int m, int x, int y)
{
    i1 = dp[m].lower_bound(x);
    if (i1 == dp[m].begin())
        return 0;
    return (*(--i1)).Y < y;
}

void process(int l, int x, int y)
{
    i1 = dp[l].lower_bound(x);
    i2 = i1;

    while (i2 != dp[l].end() && (*i2).Y >= y)
        i2++;

    dp[l].erase(i1, i2);
    dp[l][x] = y;
}
void solve()
{
    dp.resize(100001);
    int n, x, y;
    cin >> n;
    int ans = 0;
    process(0, -1e9, -1e9);

    while (n--)
    {
        cin >> x >> y;
        int l = 0, r = ans;

        while (l <= r)
        {
            int m = (r + l) >> 1;
            if (check(m, x, y))
                l = m + 1;
            else
                r = m - 1;
        }

        if (ans == l - 1)
            ans = l;
        process(l, x, y);
    }

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