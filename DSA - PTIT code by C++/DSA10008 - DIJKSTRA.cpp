/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10008 - DIJKSTRA
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
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
vector <pi> adj[1005];

void DIJKSTRA(int u)
{
    vi d(v + 1, 1e9);
	d[u] = 0;
	priority_queue < pi, vector <pi>, greater <pi> > pq;
	pq.push({0, u});

	while (!pq.empty())
    {
		pi top = pq.top();
		pq.pop();
		for (pi x : adj[top.Y])
        {
			if (d[x.X] > x.Y + d[top.Y])
            {
				d[x.X] = x.Y + d[top.Y];
				pq.push({d[x.X], x.X});
			}
		}
	}

	FORU(i, 1, v + 1) cout << d[i] << " ";
	cout << "\n";
}
void solve()
{
    FORU (i, 1, 1005) adj[i].clear();
    cin >> v >> e >> u;

    while (e--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].pb({y, w});
        adj[y].pb({x, w});
    }

    DIJKSTRA(u);
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