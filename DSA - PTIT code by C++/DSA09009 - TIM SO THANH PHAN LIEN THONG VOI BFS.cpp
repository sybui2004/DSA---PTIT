/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09009 - TIM SO THANH PHAN LIEN THONG VOI BFS
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
vi edge[1005];
int visited[1005];

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : edge[u])
        {
            if (!visited[v])
            {
                visited[v] = 1;
                q.push(v);
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
            bfs(i);
        }
    }

    return cnt;
}

void solve()
{
    cin >> v >> e;
    FORU(i, 0, 1001)
    edge[i].clear();
    reset(visited);
    int a, b;

    FORU(i, 0, e)
    {
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    cout << tplt() << "\n";
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