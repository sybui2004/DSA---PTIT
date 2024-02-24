/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09029 - DUONG DI HAMILTON
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

int v, e, kt;
int visited[1005];
vi adj[1005];

void DFS(int u, int dem)
{
    if (dem == v)
    {
        kt = 1;
        return;
    }
	visited[u] = true;
	for (int x : adj[u])
		if (!visited[x]) DFS(x, dem + 1);

	visited[u] = false;
}
void solve ()
{
    FORU (i, 1, 1004) adj[i].clear();
    cin >> v >> e;
    kt = 0;
    
    while (e--)
    {
        int x, y;   
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    FORU (i, 1, v+1)
    {
        reset(visited);
        DFS(i, 1);
        if (kt)
        {
            cout << "1\n";
            return;
        }
    }
    
    cout << "0\n";
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