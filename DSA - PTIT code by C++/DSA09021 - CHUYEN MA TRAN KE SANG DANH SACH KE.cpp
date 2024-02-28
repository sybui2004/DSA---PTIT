/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09021 - CHUYEN MA TRAN KE SANG DANH SACH KE
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

vector<vi> edge;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    edge.resize(n + 1);
    FORU(i, 1, n + 1)
    FORU(j, 1, n + 1)
    {
        cin >> a[i][j];
        if (a[i][j] == 1)
            edge[i].pb(j);
    }

    FORU(i, 1, n + 1)
    {
        for (int j : edge[i])
            cout << j << " ";
        cout << "\n";
    }
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