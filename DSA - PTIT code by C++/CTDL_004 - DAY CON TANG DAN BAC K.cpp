/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
CTDL_004 - DAY CON TANG DAN BAC K
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

int n, k, ans;
vi a;

void Try(int i, vi res)
{
    if (res.size() == k)
    {
        ans++;
        return;
    }

    if (i == n)
        return;

    if (res.empty())
    {
        vi tmp = res;
        tmp.pb(a[i]);

        Try(i + 1, tmp);
        Try(i + 1, res);
    }
    else
    {
        vi tmp = res;

        if (a[i] > res[res.size() - 1])
        {
            tmp.pb(a[i]);
            Try(i + 1, tmp);
        }

        Try(i + 1, res);
    }
}

void solve()
{
    cin >> n >> k;
    a.resize(n);

    for (int &i : a)
        cin >> i;

    Try(0, {});

    cout << ans;
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