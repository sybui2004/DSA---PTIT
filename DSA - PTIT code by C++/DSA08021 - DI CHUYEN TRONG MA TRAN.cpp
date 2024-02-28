/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08021 - DI CHUYEN TRONG MA TRAN
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

void solve()
{
    int n, m;
    cin >> m >> n;
    queue<pair<pi, int>> q;
    int visited[m + 1][n + 1];
    reset(visited);
    q.push({{0, 1}, 1});

    int a[m + 1][n + 1] = {};

    FORU(i, 1, m + 1)
    FORU(j, 1, n + 1)
    cin >> a[i][j];

    visited[1][1] = 1;

    while (!q.empty())
    {
        pair<pi, int> res = q.front();
        q.pop();

        if (res.X.Y == m && res.Y == n)
        {
            cout << res.X.X << "\n";
            return;
        }

        if (res.X.Y + a[res.X.Y][res.Y] <= m && !visited[res.X.Y + a[res.X.Y][res.Y]][res.Y])
        {
            visited[res.X.Y + a[res.X.Y][res.Y]][res.Y] = 1;
            q.push({{res.X.X + 1, res.X.Y + a[res.X.Y][res.Y]}, res.Y});
        }

        if (res.Y + a[res.X.Y][res.Y] <= n && !visited[res.X.Y][res.Y + a[res.X.Y][res.Y]])
        {
            visited[res.X.Y][res.Y + a[res.X.Y][res.Y]] = 1;
            q.push({{res.X.X + 1, res.X.Y}, res.Y + a[res.X.Y][res.Y]});
        }
    }
    cout << "-1\n";
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