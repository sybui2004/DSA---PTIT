/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09026 - DUONG DI THEO BFS VOI DO THI CO HUONG
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

vector<vi> edge;
int V, e, u, v;

void bfs(int u)
{
    queue<pair<int, vi>> q;
    vi tmp;
    tmp.pb(u);
    q.push({u, tmp});
    int m[1005] = {};
    m[u] = 1;

    while (!q.empty())
    {
        int front = q.front().X;
        tmp = q.front().Y;
        q.pop();

        if (front == v)
        {
            for (int i : tmp)
                cout << i << " ";
            cout << "\n";
            return;
        }

        for (int i : edge[front])
        {
            if (!m[i])
            {
                m[i] = 1;
                tmp.pb(i);
                q.push({i, tmp});
                tmp.pop_back();
            }
        }
    }

    cout << "-1\n";
}

void solve()
{
    cin >> V >> e >> u >> v;
    edge.clear();
    edge.resize(V + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
    }

    bfs(u);
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