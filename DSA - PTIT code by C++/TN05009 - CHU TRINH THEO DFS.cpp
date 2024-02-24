/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
TN05009 - CHU TRINH THEO DFS
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

int kt;
vi ans;
vi adj[1005];
int visited[1005];

void DFS(int u, vi cur, int par)
{
	if (ans.size() > 1) return;
	visited[u] = 1;
	for (int x : adj[u])
    {
		if (!visited[x])
        {
            cur.pb(x);
            DFS(x, cur, u);
            cur.pop_back();
        }
		else if (x != par && x == 1)
            ans = cur;
	}
}

void solve()
{
    FORU (i, 1, 1005) adj[i].clear();
    int v, e;
    cin >> v >> e;
    FORU(i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    
    ans.clear();
    reset(visited);
    FORU (i, 1, v+1) sort(all(adj[i]));
    ans.pb(1);
    DFS(1, {1}, 0);

    if (ans.size() == 1) cout << "NO";
    else
    {
        for (int i : ans) cout << i << " ";
        cout << "1";
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