/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09019 - KIEM TRA CHU TRINH
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

int v, e;
int visited[1005];
vi adj[1005];

int DFS(int u, int par)
{
    visited[u] = 1;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            if (DFS(v, u))
                return 1;
        }
        else if (v != par)
            return 1;
    }

    return 0;
}
void solve()
{
    FORU(i, 1, 1004)
    adj[i].clear();
    cin >> v >> e;

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    FORU(i, 1, v + 1)
    {
        reset(visited);
        if (DFS(i, 0))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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