/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11029 - DUONG DI TOI NODE LA
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

int n;
vi edge[1005];
int visited[1005];
int dd[1005];
vector <vi> ans;

void DFS(int u,vi cur)
{
	if (dd[u]) ans.pb(cur);
	visited[u] = 1;
	for (int v : edge[u])
        if (!visited[v]) 
        {
            vi tmp = cur;
            tmp.pb(v);
            DFS(v, tmp);
        }
}

int cmp(vi a, vi b)
{
    return a[a.size() - 1] < b[b.size() - 1];
}

void solve()
{
	FORU (i, 1, 1005) edge[i].clear();
    reset(visited);
    reset(dd);
    ans.clear();
    cin >> n;
    n--;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        edge[x].pb(y);
    }

    FORU (i, 1, 1005) 
        if (edge[i].empty()) dd[i] = 1;

    DFS(1, {1});

    sort(all(ans),cmp);

    for (vi i : ans) 
    {
        for (int j : i) cout << j << " ";
        cout << "\n";
    }
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