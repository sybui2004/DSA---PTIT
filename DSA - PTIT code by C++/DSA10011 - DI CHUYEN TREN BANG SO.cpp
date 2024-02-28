/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10011 - DI CHUYEN TREN BANG SO
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

int n, m, A[505][505];
pi gotoXY[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
map<pi, int> mp;

class Compare
{
public:
    bool operator()(pair<pi, int> a, pair<pi, int> b)
    {
        return a.Y > b.Y;
    }
};

void DIJKSTRA()
{
    priority_queue<pair<pi, int>, vector<pair<pi, int>>, Compare> pq;
    pq.push({{1, 1}, A[1][1]});

    while (!pq.empty())
    {
        auto top = pq.top();

        if (top.X.X == n && top.X.Y == m)
        {
            cout << top.Y << "\n";
            return;
        }
        pq.pop();

        FORU(i, 0, 4)
        {
            auto tmp = top;
            tmp.X.X += gotoXY[i].X;
            tmp.X.Y += gotoXY[i].Y;
            if (tmp.X.X >= 1 && tmp.X.X <= n && tmp.X.Y >= 1 && tmp.X.Y <= m && !mp[{tmp.X.X, tmp.X.Y}])
            {
                pq.push({{tmp.X.X, tmp.X.Y}, tmp.Y + A[tmp.X.X][tmp.X.Y]});
                mp[{tmp.X.X, tmp.X.Y}] = 1;
            }
        }
    }
}
void solve()
{
    mp.clear();
    cin >> n >> m;
    FORU(i, 1, n + 1)
    FORU(j, 1, m + 1)
        cin >> A[i][j];

    DIJKSTRA();
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