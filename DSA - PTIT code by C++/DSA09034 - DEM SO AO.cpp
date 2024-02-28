/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09034 - DEM SO AO
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

int n, m, ans;
char A[105][105];
int visited[105][105];
int posX[8] = {1, -1, 0, 0, -1, 1, -1, 1};
int posY[8] = {0, 0, -1, 1, -1, -1, 1, 1};
vector<pi> cur;

void dfs(int x, int y)
{
    visited[x][y] = 1;

    FORU(i, 0, 8)
    {
        int a = x + posX[i];
        int b = y + posY[i];
        if (a >= 1 && a <= n && b >= 1 && b <= m && !visited[a][b] && A[a][b] == 'W')
            dfs(a, b);
    }
}

void solve()
{
    cin >> n >> m;

    FORU(i, 1, n + 1)
    FORU(j, 1, m + 1)
    {
        cin >> A[i][j];
        if (A[i][j] == 'W')
            cur.pb({i, j});
    }

    reset(visited);
    for (pi i : cur)
    {
        if (visited[i.X][i.Y] == 0)
        {
            ans++;
            dfs(i.X, i.Y);
        }
    }

    cout << ans;
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}