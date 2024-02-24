/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10007 - CAY KHUNG CUA DO THI THEO THUAT TOAN BFS
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
vector <vi> edge;
int visited[1005];
vector <pi> ans;

void BFS (int u)
{
	visited[u] = 1;
	queue <int> q;
	q.push(u);
	while (!q.empty())
    {
		int front = q.front();
		q.pop();
		for (int x : edge[front])
        {
			if (!visited[x])
            {
				ans.push_back({front, x});
				q.push(x);
				visited[x] = 1;
			}
		}
	}
}

void solve ()
{
	cin >> v >> e >> u;
	edge.clear();
	edge.resize(v+1);
    reset(visited);
    ans.clear();

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    BFS(u);

    if (ans.size() == v - 1)
    {
        for (pi i : ans) cout << i.X << " " << i.Y << "\n";
    }
    else cout << "-1\n";
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