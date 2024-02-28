/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09027 - KIEM TRA DUONG DI
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

void bfs()
{
    queue<int> q;
    q.push(u);
    int m[1005] = {};
    m[u] = 1;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        if (front == v)
        {
            cout << "YES\n";
            return;
        }
        for (int i : edge[front])
            if (!m[i])
            {
                m[i] = 1;
                q.push(i);
            }
    }

    cout << "NO\n";
}

void solve()
{
    cin >> V >> e;
    edge.clear();
    edge.resize(V + 1);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
        edge[b].pb(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        cin >> u >> v;
        bfs();
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