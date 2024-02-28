/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01015 - TIM BOI SO
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

ll f[505];
void solve()
{
    int n;
    cin >> n;

    if (f[n])
    {
        cout << f[n] << "\n";
        return;
    }

    queue<ll> q;
    q.push(9);
    while (1)
    {
        ll res = q.front();
        q.pop();
        if (res % n == 0)
        {
            cout << res << "\n";
            f[n] = res;
            return;
        }
        q.push(res * 10);
        q.push(res * 10 + 9);
    }
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