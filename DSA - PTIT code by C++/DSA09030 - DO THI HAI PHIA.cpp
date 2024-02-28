/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09030 - DO THI HAI PHIA
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

int n, m;
int color[1005];
vi adj[1005];

bool BFS(int u)
{
    queue<int> q;
    q.push(u);
    color[u] = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int x : adj[v])
        {
            if (color[x] == -1)
            {
                color[x] = 1 - color[v];
                q.push(x);
            }
            else if (color[x] == color[v])
                return false;
        }
    }

    return true;
}

void solve()
{
    FORU(i, 1, 1004)
    adj[i].clear();
    cin >> n >> m;

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    memset(color, -1, sizeof(color));

    FORU(i, 1, n + 1)
    {
        if (color[i] == -1 && !BFS(i))
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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