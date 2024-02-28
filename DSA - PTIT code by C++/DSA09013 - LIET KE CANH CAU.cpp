/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09013 - LIET KE CANH CAU
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

// int v, e, cur;
// vector <vi > edge;
// int visited[1005];
// vector <pi> C;

// void dfs(int u)
// {
//     visited[u] = 1;
//     for (int i : edge[u])
//         if (!visited[i]) dfs(i);
// }

// void bfs(int n, int x, int y)
// {
//     queue<int> q;
//     q.push(n);
//     while (q.size())
//     {
//         int u = q.front();
//         q.pop();
//         for (auto v : edge[u])
//         {
//             if ((u == x && v == y) || (u == y && v == x))
//                 continue;
//             if (!visited[v])
//             {
//                 visited[v] = 1;
//                 q.push(v);
//             }
//         }
//     }
// }

// int tplt()
// {
//     int cnt = 0;
//     FORU (i, 1, v+1)
//     {
//         if (!visited[i])
//         {
//             cnt++;
//             dfs(i);
//         }
//     }
//     return cnt;
// }

// void process()
// {
//     for (auto it : C)
//     {
//         int cnt = 0;
//         int x = it.X, y = it.Y;
//         reset(visited);
//         FORU (i, 1, v+1)
//         {
//             if (!visited[i])
//             {
//                 cnt++;
//                 bfs(i, x, y);
//             }
//         }

//         if (cnt > cur)
//         {
//             cout << x << " " << y << " ";
//         }
//     }
// }

// void solve ()
// {
// 	cin >> v >> e;
//     C.clear();
// 	edge.clear();
// 	edge.resize(v+1);
// 	int a, b;

// 	FORU (i, 0, e)
// 	{
// 		cin >> a >> b;
// 		edge[a].push_back(b);
// 		edge[b].push_back(a);
//         C.push_back({a, b});
// 	}

//     reset(visited);

// 	cur = tplt();

//     process();

//     cout << "\n";
// }

int v, e, disc[1005], low[1005], timer;
vector<vi> adj;
vector<pi> ans;
void dfs(int u, int p)
{
    low[u] = disc[u] = ++timer;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (!disc[v])
        {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] > disc[u])
            {
                ans.pb({min(u, v), max(u, v)});
            }
        }
        else
            low[u] = min(low[u], disc[v]);
    }
}

void init()
{
    cin >> v >> e;
    adj.clear();
    adj.resize(v + 1);

    FORU(i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    reset(disc);
    reset(low);
    timer = 0;
}

void solve()
{
    ans.clear();

    FORU(i, 1, v + 1)
    {
        if (!disc[i])
            dfs(i, -1);
    }

    sort(all(ans));

    for (pi i : ans)
        cout << i.X << " " << i.Y << " ";
    cout << "\n";
}
int main()
{
    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        init();
        solve();
    }
}
