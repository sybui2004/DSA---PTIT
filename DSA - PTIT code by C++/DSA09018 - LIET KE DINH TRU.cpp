/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09018 - LIET KE DINH TRU
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

int v, e, cur;
vector<vi> edge;
int visited[1005];
vi C;

void dfs(int u)
{
    visited[u] = 1;
    for (int i : edge[u])
        if (!visited[i])
            dfs(i);
}

void bfs(int n, int x)
{
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u != x)
        {
            for (auto v : edge[u])
            {
                if (v == x)
                    continue;
                if (!visited[v])
                {
                    visited[v] = 1;
                    q.push(v);
                }
            }
        }
    }
}

int tplt()
{
    int cnt = 0;
    FORU(i, 1, v + 1)
    {
        if (!visited[i])
        {
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

void process()
{
    for (int it : C)
    {
        int cnt = 0;
        reset(visited);

        FORU(i, 1, v + 1)
        {
            if (!visited[i] && i != it)
            {
                cnt++;
                bfs(i, it);
            }
        }

        if (cnt > cur)
            cout << it << " ";
    }
}

void solve()
{
    cin >> v >> e;
    C.clear();
    edge.clear();
    edge.resize(v + 1);
    int a, b;

    FORU(i, 0, e)
    {
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    FORU(i, 1, v + 1)
    C.pb(i);
    reset(visited);

    cur = tplt();

    process();

    cout << "\n";
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