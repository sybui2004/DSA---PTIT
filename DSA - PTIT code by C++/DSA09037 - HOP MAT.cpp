/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09037 - HOP MAT
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

int k, n, m;
int visited[1005];
vi point;
vi edge[1005];

void DFS(int u)
{
    visited[u] = 1;
    for (int v : edge[u])
    {
        if (!visited[v])
            DFS(v);
    }
}
void solve()
{
    cin >> k >> n >> m;
    FORU(i, 1, 1005)
    edge[i].clear();
    point.clear();
    point.resize(k);

    for (int &i : point)
        cin >> i;

    FORU(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        edge[y].pb(x);
    }

    int ans = 0;

    FORU(i, 1, n + 1)
    {
        reset(visited);
        DFS(i);

        int kt = 1;

        for (int j : point)
        {
            if (!visited[j])
            {
                kt = 0;
                break;
            }
        }

        if (kt)
            ans++;
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