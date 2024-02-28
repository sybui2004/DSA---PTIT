/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03021 - TIM DAY SO
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

vi uoc_mi, a;
void solve()
{
    int n, s = 1e9;
    cin >> n;
    a.resize(n);

    for (int &i : a)
        cin >> i;

    sort(all(a));
    FORU(i, 1, a[0] + 1)
    if (a[0] % i == 0)
        uoc_mi.pb(i);

    FORD(i, a[0], 1)
    {
        int res = a[0] / i, kt = 0, ans = 0, tmp = 1;

        FORU(j, 0, n)
        {
            while (a[j] / tmp > res)
                tmp++;

            if (a[j] / tmp == res)
                ans += tmp;
            else
            {
                kt = 1;
                break;
            }
        }

        if (!kt)
            s = min(ans, s);
    }

    cout << s;
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