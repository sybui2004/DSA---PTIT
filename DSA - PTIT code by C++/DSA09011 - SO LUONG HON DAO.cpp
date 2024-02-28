/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09011 - SO LUONG HON DAO
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

int n, m;
int A[505][505];
int visited[505][505];
int posX[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int posY[8] = {0, 0, -1, 1, -1, 1, 1, -1};

void dfs(int x, int y)
{
    visited[x][y] = 1;
    FORU(i, 0, 8)
    {
        int a = x + posX[i];
        int b = y + posY[i];
        if (a >= 0 && a < n && b >= 0 && b < m && !visited[a][b] && A[a][b])
            dfs(a, b);
    }
}

void solve()
{
    cin >> n >> m;
    reset(visited);

    FORU(i, 0, n)
    FORU(j, 0, m)
        cin >> A[i][j];

    int ans = 0;

    FORU(i, 0, n)
    FORU(j, 0, m)
    {
        if (A[i][j] && !visited[i][j])
        {
            ans++;
            dfs(i, j);
        }
    }

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