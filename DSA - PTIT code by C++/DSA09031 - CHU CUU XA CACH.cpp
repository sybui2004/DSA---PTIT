/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09031 - CHU CUU XA CACH
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

int n, m, k, ans;
int visited[105][105];
int posX[4] = {1, -1, 0, 0};
int posY[4] = {0, 0, -1, 1};
vector<pi> sheep;
map<pair<pi, pi>, int> mp;
map<pi, int> ddsheep;
set<pair<pi, pi>> s;
void dfs(int x, int y)
{
    visited[x][y] = 1;

    FORU(i, 0, 4)
    {
        int a = x + posX[i];
        int b = y + posY[i];
        if (a >= 1 && a <= n && b >= 1 && b <= n && !visited[a][b] && mp[{{x, y}, {a, b}}] != 1)
            dfs(a, b);
    }
}

void solve()
{
    cin >> n >> k >> m;
    while (m--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        mp[{{a, b}, {c, d}}] = 1;
        mp[{{c, d}, {a, b}}] = 1;
    }

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        sheep.pb({a, b});
        ddsheep[{a, b}] = 1;
    }

    for (pi i : sheep)
    {
        reset(visited);
        dfs(i.X, i.Y);
        FORU(p, 1, n + 1)
        FORU(j, 1, n + 1)
        {
            if (visited[p][j] == 0 && ddsheep[{p, j}] == 1)
            {
                s.insert({{i.X, i.Y}, {p, j}});
                s.insert({{p, j}, {i.X, i.Y}});
            }
        }
    }

    cout << s.size() / 2;
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