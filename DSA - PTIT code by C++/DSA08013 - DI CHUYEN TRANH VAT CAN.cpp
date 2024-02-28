/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08013 - DI CHUYEN TRANH VAT CAN
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

char C[105][105];
int n, a, b, c, d;

void BFS()
{
    int dp[105][105];
    reset(dp);
    queue<pi> q;
    dp[a][b] = 0;

    q.push({a, b});

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        if (front.X == c and front.Y == d)
        {
            cout << dp[c][d] << "\n";
            return;
        }
        int x = front.X, y = front.Y;

        FORU(i, x + 1, n)
        {
            if (!dp[i][y] && C[i][y] == '.')
            {
                dp[i][y] = dp[x][y] + 1;
                q.push({i, y});
            }
            else
                break;
        }

        FORU(i, y + 1, n)
        {
            if (!dp[x][i] && C[x][i] == '.')
            {
                dp[x][i] = dp[x][y] + 1;
                q.push({x, i});
            }
            else
                break;
        }

        FORD(i, x - 1, 0)
        {
            if (!dp[i][y] && C[i][y] == '.')
            {
                dp[i][y] = dp[x][y] + 1;
                q.push({i, y});
            }
            else
                break;
        }

        FORD(i, y - 1, 0)
        {
            if (!dp[x][i] && C[x][i] == '.')
            {
                dp[x][i] = dp[x][y] + 1;
                q.push({x, i});
            }
            else
                break;
        }
    }
}

void solve()
{
    cin >> n;
    FORU(i, 0, n)
    FORU(j, 0, n)
    cin >> C[i][j];

    cin >> a >> b >> c >> d;
    BFS();
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