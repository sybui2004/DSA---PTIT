/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03009 - SAP XEP CONG VIEC 2
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

int n;

bool cmp(pi a, pi b)
{
    if (a.Y == b.Y)
        return a.X > b.X;
    return a.Y > b.Y;
}
void solve()
{
    cin >> n;
    vector<pi> v(n);
    mii m;

    FORU(i, 0, n)
    {
        int x;
        cin >> x >> v[i].X >> v[i].Y;
    }

    sort(all(v), cmp);

    int ans = 0, cnt = 0;

    FORU(i, 0, n)
    {
        if (!m[v[i].X])
        {
            ans += v[i].Y;
            cnt++;
            m[v[i].X] = 1;
        }
        else
        {
            FORD(j, v[i].X, 1)
            {
                if (!m[j])
                {
                    ans += v[i].Y;
                    cnt++;
                    m[j] = 1;
                    break;
                }
            }
        }
    }

    cout << cnt << " " << ans << "\n";
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