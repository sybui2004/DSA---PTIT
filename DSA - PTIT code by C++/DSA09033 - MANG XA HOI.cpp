/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09033 - MANG XA HOI
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

vector<vi> v;
int n, m, cnt, ans;

void solve()
{
    cin >> n >> m;
    v.clear();
    v.resize(n + 1);

    FORU(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }

    FORU(i, 1, n + 1)
    {
        for (int j : v[i])
        {
            if (v[j].size() != v[i].size())
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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