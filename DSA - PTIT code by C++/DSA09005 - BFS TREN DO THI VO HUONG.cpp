/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09005 - BFS TREN DO THI VO HUONG
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
int visited[1005];

void solve()
{
    reset(visited);
    int v, e, u;
    cin >> v >> e >> u;
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
    {
        if (!edge[i].empty())
            sort(all(edge[i]));
    }

    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";

        for (auto x : edge[front])
        {
            if (!visited[x])
            {
                visited[x] = 1;
                q.push(x);
            }
        }
    }

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