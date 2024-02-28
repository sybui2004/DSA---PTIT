/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09024 - BFS TREN DO THI CO HUONG
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
int v, e, u;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    int m[1005] = {};
    m[u] = 1;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";

        for (int i : edge[front])
        {
            if (!m[i])
            {
                m[i] = 1;
                q.push(i);
            }
        }
    }
    cout << "\n";
}

void solve()
{
    cin >> v >> e >> u;
    edge.clear();
    edge.resize(v + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
    }
    FORU(i, 1, v + 1)
    if (!edge[i].empty())
        sort(all(edge[i]));
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