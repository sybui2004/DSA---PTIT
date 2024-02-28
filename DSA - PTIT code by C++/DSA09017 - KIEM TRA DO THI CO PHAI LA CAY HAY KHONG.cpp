/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09017 - KIEM TRA DO THI CO PHAI LA CAY HAY KHONG
*/
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
int visited[1005], trace[1005];
int v;

int bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int x : edge[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = 1;
                trace[x] = front;
            }
            else if (trace[front] != x)
                return 1;
        }
    }

    return 0;
}
void solve()
{
    cin >> v;
    edge.clear();
    edge.resize(v + 1);

    FORU(i, 0, v - 1)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
        edge[b].pb(a);
    }

    FORU(i, 1, v + 1)
    {
        reset(visited);
        reset(trace);
        if (bfs(i))
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