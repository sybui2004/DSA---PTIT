/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02019 - DUONG DI DAI NHAT
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

int ans, n, m, visited[25][25];

void dfs(int i, int dem)
{
    ans = max(ans, dem);
    FORU(j, 1, n + 1)
    {
        if (visited[i][j])
        {
            visited[i][j] = visited[j][i] = 0;
            dfs(j, dem + 1);
            visited[i][j] = visited[j][i] = 1;
        }
    }
}

void solve()
{
    reset(visited);
    ans = 0;
    cin >> n >> m;
    int u, v;

    FORU(i, 0, m)
    {

        cin >> u >> v;
        u++, v++;
        visited[u][v] = visited[v][u] = 1;
    }

    FORU(i, 1, n + 1)
    dfs(i, 0);
    cout << ans << "\n";
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