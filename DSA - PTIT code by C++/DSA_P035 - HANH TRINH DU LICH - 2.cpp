/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA_P035 - HANH TRINH DU LICH - 2
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

ll mod = 1e9 + 7;

vector<vector<pi>> edge;
vector<vector<pair<int, ll>>> adj;
int n, m, k;
vi s;
ll a[16][1005], dp[1 << 16][16], ans = -1, cnt, cntt;

void dijkstra(int i)
{
	queue<int> q;
	a[i][s[i]] = 0;
	q.push(s[i]);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (pi j : edge[u])
		{
			if (a[i][j.X] == -1 || a[i][j.X] > a[i][u] + j.Y)
			{
				a[i][j.X] = a[i][u] + j.Y;
				q.push(j.X);
			}
		}
	}
}

void dfs(int i, int mask, ll cost, int d)
{
	ll val = dp[mask][i];
	if (val > cost || !val)
	{
		dp[mask][i] = cost;
		for (auto j : adj[i])
		{
			ll cur = j.Y + cost;
			if (ans == -1 || ans > cur)
			{
				if (j.X == 0 && d == k)
					ans = cur;
				else if (d < k)
				{
					if (!(mask & (1 << j.X)))
						dfs(j.X, mask | (1 << j.X), cur, d + 1);
				}
			}
		}
	}
}

bool cmp(pi a, pi b)
{
	return a.Y < b.Y;
}

void solve()
{
	cin >> n >> m >> k;
	s.resize(k + 1);
	FORU(i, 1, k + 1)
		cin >> s[i];
	int u, v, c;
	edge.resize(n + 1);
	adj.resize(n + 1);

	while (m--)
	{
		cin >> u >> v >> c;
		edge[u].pb({v, c});
	}

	memset(a, -1, sizeof(a));
	s[0] = 1;

	FORU(i, 0, k + 1)
	dijkstra(i);
	FORU(i, 0, k + 1)
	{
		FORU(j, 0, k + 1)
		if (i != j && a[i][s[j]] != -1)
			adj[i].pb({j, a[i][s[j]]});
		sort(all(adj[i]), cmp);
	}

	dfs(0, 1, 0, 0);
	cout << ans;
}

int main()
{

	fast;
	int t = 1;
	// cin >> t;

	while (t--)
	{
		solve();
	}
}