/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10001 - TIM DUONG
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

int n, m, kt;
char A[505][505];
int visited[505][505];
int posX[4] = {-1, 1, 0, 0};
int posY[4] = {0, 0, -1, 1};
char dir[4] = {'U', 'D', 'L', 'R'};

void dfs(int x, int y, int cnt, char way)
{
    visited[x][y] = 1;
    if (A[x][y] == 'T' && cnt <= 2)
    {
        kt = 1;
        return;
    }

    if (cnt > 2 || A[x][y] == 'T')
    {
        visited[x][y] = 0;
        return;
    }

    FORU(i, 0, 4)
    {
        int x1 = x + posX[i], y1 = y + posY[i];
        if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && A[x1][y1] != '*' && !visited[x1][y1])
        {
            if (dir[i] != way)
                dfs(x1, y1, cnt + 1, dir[i]);
            else
                dfs(x1, y1, cnt, dir[i]);
        }
    }

    visited[x][y] = 0;
}

void solve()
{
    cin >> n >> m;
    kt = 0;
    reset(visited);
    int x, y;

    FORU(i, 0, n)
    FORU(j, 0, m)
    {
        cin >> A[i][j];
        if (A[i][j] == 'S')
        {
            x = i;
            y = j;
        }
    }

    int ans = 0;

    dfs(x, y, -1, 'G');

    if (kt)
        cout << "YES\n";
    else
        cout << "NO\n";
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