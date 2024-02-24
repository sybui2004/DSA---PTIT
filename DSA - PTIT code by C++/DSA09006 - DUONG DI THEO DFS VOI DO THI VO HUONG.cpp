/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09006 - DUONG DI THEO DFS VOI DO THI VO HUONG
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
int cnt;

void dfs(int st, vi cur)
{
    visited[st] = 1;
    for (int i : edge[st])
        if (!visited[i])
        {
            if (i == en && cnt != 1)
            {
                cnt = 1;
                for (int j : cur) cout << j << " ";
                cout << i;
                return;
            }
            vi tmp = cur;
            tmp.pb(i);
            if (cnt != 1) dfs(i, tmp);
        }
}


void solve ()
{
	cin >> v >> e >> st >> en;
	edge.clear();
	edge.resize(v+1);
	int a, b;
    reset(visited);
    cnt = 0;

	FORU (i, 0, e)
	{
		cin >> a >> b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}

    for (auto i : edge) sort(all(i));

    dfs(st, {st});

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