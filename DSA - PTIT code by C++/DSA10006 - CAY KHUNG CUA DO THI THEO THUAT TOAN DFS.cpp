/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10006 - CAY KHUNG CUA DO THI THEO THUAT TOAN DFS
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

int v, e, u;
vector<vi> edge;
int visited[1005];
vector<pi> ans;

void DFS(int u)
{
    visited[u] = 1;
    for (int x : edge[u])
    {
        if (!visited[x])
        {
            ans.push_back({u, x});
            DFS(x);
        }
    }
}

void solve()
{
    cin >> v >> e >> u;
    edge.clear();
    edge.resize(v + 1);
    reset(visited);
    ans.clear();

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    DFS(u);

    if (ans.size() == v - 1)
    {
        for (pi i : ans)
            cout << i.X << " " << i.Y << "\n";
    }
    else
        cout << "-1\n";
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