/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02014 - TU DIEN
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

int posX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int posY[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int k, m, n, ma, kt;
int visited[105][105];
vector<string> cur;
char A[105][105];
unordered_map<string, int> mp;

void Try(int x, int y, string s)
{
    if (s.size() > ma)
        return;
    if (mp[s])
    {
        cout << s << " ";
        kt = 1;
    }
    FORU(i, 0, 8)
    {
        int a = x + posX[i];
        int b = y + posY[i];
        if (a >= 0 && a < m && b >= 0 && b < n && !visited[a][b])
        {
            visited[a][b] = 1;
            Try(a, b, s + A[a][b]);
            visited[a][b] = 0;
        }
    }
}

void solve()
{
    cin >> k >> m >> n;
    mp.clear();
    cur.clear();
    cur.resize(k);
    ma = 0;
    kt = 0;

    for (string &i : cur)
    {
        cin >> i;
        ma = max(ma, (int)i.size());
        mp[i] = 1;
    }

    FORU(i, 0, m)
    FORU(j, 0, n)
        cin >> A[i][j];

    FORU(i, 0, m)
    FORU(j, 0, n)
    {
        reset(visited);
        visited[i][j] = 1;
        Try(i, j, string(1, A[i][j]));
    }

    if (!kt)
        cout << "-1";
    cout << "\n";
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