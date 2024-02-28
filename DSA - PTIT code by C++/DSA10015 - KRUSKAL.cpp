/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10015 - KRUSKAL
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

ll MOD = 1e9 + 7;

int v, e;

struct edge
{
    int u, v, w;
};

vector<edge> adj;
int par[105], size[105];

int find(int v)
{
    if (v == par[v])
        return v;
    return par[v] = find(par[v]);
}

int Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return 0;
    if (size[a] < size[b])
        swap(a, b);
    par[b] = a;
    size[a] += size[b];
    return true;
}

int cmp(edge a, edge b)
{
    return a.w < b.w;
}

void KRUSKAL()
{
    vector<edge> mst;
    int d = 0;
    sort(all(adj), cmp);

    FORU(i, 0, e)
    {
        if (mst.size() == v - 1)
            break;
        edge tmp = adj[i];
        if (Union(tmp.u, tmp.v))
        {
            mst.pb(tmp);
            d += tmp.w;
        }
    }

    cout << d << "\n";
}

void solve()
{

    cin >> v >> e;
    reset(par);
    reset(size);
    adj.clear();

    FORU(i, 1, v + 1)
    {
        par[i] = i;
        size[i] = 1;
    }

    FORU(i, 0, e)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj.pb({x, y, w});
    }

    KRUSKAL();
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