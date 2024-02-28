/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09001 - CHUYEN DANH SACH CANH SANG DANH SACH KE
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
    int v, e;
    cin >> v >> e;
    edge.clear();
    edge.resize(v + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
        edge[b].pb(a);
    }

    FORU(i, 1, v + 1)
    {
        cout << i << ": ";
        for (int j : edge[i])
            cout << j << " ";
        cout << "\n";
    }
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