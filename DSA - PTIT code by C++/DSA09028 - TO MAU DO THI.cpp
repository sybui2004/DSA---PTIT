/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09028 - TO MAU DO THI
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

ll mod = 1e9 + 7;

int v, e, m;
int a[15][15];
int visited[15];
vector <pi> edge;

int cmp(pi a,pi b)
{
    return a.Y > b.Y;
}

void solve()
{
    int color = 0;
    edge.clear();
    reset(visited);
    reset(a);
    
    cin >> v >> e >> m;

    FORU (i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    FORU (i, 1, v+1)
    {
        int cnt = 0;;
        FORU (j, 1, v+1) 
            if (a[i][j] == 1) cnt++;
        edge.pb({i, cnt});
    }

    sort(all(edge), cmp);

    for(pi i: edge)
    {
        int u = i.X;
        if(!visited[u])
        {
            color++;
            visited[u] = 1;
            FORU (j, 1, v+1)
                if(!a[u][j]) visited[j] = 1;
        }
    }

    if(color <= m) cout<<"YES\n";
    else cout<<"NO\n";
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