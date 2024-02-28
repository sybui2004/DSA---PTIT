/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08007 - SO BDN 1
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

void solve()
{
    ll n;
    cin >> n;
    int ans = 0;
    queue<ll> q;
    q.push(1);

    while (!q.empty())
    {
        ll res = q.front();
        q.pop();
        if (res <= n)
            ans++;
        if (res * 10 <= n)
            q.push(res * 10);
        if (res * 10 + 1 <= n)
            q.push(res * 10 + 1);
    }

    cout << ans << "\n";
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