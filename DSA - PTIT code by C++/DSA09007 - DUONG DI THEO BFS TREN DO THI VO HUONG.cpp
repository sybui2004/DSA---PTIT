/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09007 - DUONG DI THEO BFS TREN DO THI VO HUONG
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
#define mii map <int, int> 
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

int v, e, st, en;
vector <vi > edge;
int visited[1005];

void bfs(int st, int en)
{
    queue <vi> q;
    q.push({st});
    while (!q.empty())
    {
        vi u = q.front();
        q.pop();
        if (u[u.size() - 1] == en)
        {
            for (int i : u) cout << i << " ";
            return;
        }
        for (int v : edge[u[u.size() - 1]])
        {
            if (!visited[v])
            {
                visited[v] = 1;
                vi tmp = u;
                tmp.pb(v);
                q.push(tmp);
                visited[v] = 0;
            }
        }
    }
}

void solve ()
{
	cin >> v >> e >> st >> en;
	edge.clear();
	edge.resize(v+1);
	int a, b;

	FORU (i, 0, e)
	{
		cin >> a >> b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}

    bfs(st, en);
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