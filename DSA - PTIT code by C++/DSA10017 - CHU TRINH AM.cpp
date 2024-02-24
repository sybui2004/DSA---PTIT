/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10017 - CHU TRINH AM
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

int v, e;
vector <vi > edge;
int visited[1005];
map <pi, int> mp;

bool bfs(int u)
{
    queue <pi> q;
    q.push({u, 0});
    visited[u] = 1;

    while (!q.empty())
    {
        pi front = q.front();
        q.pop();
        for (int v : edge[front.X])
        {
            if (!visited[v])
            {
                visited[v] = 1;
                q.push(front);
				q.push({v, front.Y + mp[{front.X, v}]});
            }
            else if (v == u && front.Y + mp[{front.X, v}] < 0) return true;
        }
    }

    return false;
}

void solve ()
{
	cin >> v >> e;
	edge.clear();
	edge.resize(v+1);
    mp.clear();

	int a, b, c;

	FORU (i, 0, e)
	{
		cin >> a >> b >> c;
		edge[a].push_back(b);
        mp[{a, b}] = c;
	}

    FORU (i, 1, v+1)
    {
        reset(visited);
        if (bfs(i)) 
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