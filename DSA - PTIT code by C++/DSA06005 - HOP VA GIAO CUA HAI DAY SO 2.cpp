/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06005 - HOP VA GIAO CUA HAI DAY SO 2
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
    cin >> n >> m;

    vi a(n), b(m);
    mii mp;

    for (int &i : a)
    {
        cin >> i;
        mp[i]++;
    }

    for (int &i : b)
    {
        cin >> i;
        mp[i]++;
    }

    for (auto x : mp)

        cout << x.X << " ";

    cout << "\n";

    for (auto x : mp)

        if (x.Y >= 2)
            cout << x.X << " ";

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