/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02004 - DI CHUYEN TRON ME CUNG 2
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

int n;
set<string> ans;
map<pi, int> m;
int a[10][10];

int gotoX[] = {1, 0, 0, -1};
int gotoY[] = {0, 1, -1, 0};
char gotoP[] = {'D', 'R', 'L', 'U'};

bool check(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= n;
}

void Try(int i, int j, string res)
{
    if (i == n && j == n)
        ans.insert(res);

    FORU(k, 0, 4)
    {
        int ii = i + gotoX[k];
        int jj = j + gotoY[k];
        if (check(ii, jj) && a[ii][jj] && !m[{ii, jj}])
        {
            m[{ii, jj}] = 1;
            Try(ii, jj, res + gotoP[k]);
            m[{ii, jj}] = 0;
        }
    }
}

void solve()
{
    ans.clear();
    m.clear();
    cin >> n;

    FORU(i, 1, n + 1)
    FORU(j, 1, n + 1)
        cin >> a[i][j];

    m[{1, 1}] = 1;
    Try(1, 1, "");

    if (ans.empty())
    {
        cout << "-1\n";
        return;
    }

    for (string i : ans)
        cout << i << " ";
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