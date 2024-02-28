/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11030 - KHOANG CACH GIUA HAI NODE
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

vi edge[1005];
int visited[1005];
int ans, n, kt, u, v;

void DFS(int u, int dis)
{
    if (kt)
        return;
    visited[u] = 1;

    if (u == v)
    {
        ans = dis;
        kt = 1;
        return;
    }

    for (int x : edge[u])
        if (!visited[x])
            DFS(x, dis + 1);
}

void solve()
{
    cin >> n;
    ans = 0;
    FORU(i, 1, 1005)
    edge[i].clear();
    n--;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        edge[x].pb(y);
        edge[y].pb(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        ans = 0;
        kt = 0;
        reset(visited);
        cin >> u >> v;

        DFS(u, 0);
        cout << ans << "\n";
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