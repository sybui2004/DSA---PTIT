/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05036 - TANG - GIAM
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
    int n;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (auto &i : v)
        cin >> i.X >> i.Y;
    vi dp(n);
    for (int &i : dp)
        i = 1;
    FORU(i, 0, n)
    FORU(j, 0, i)
    if (v[i].X > v[j].X && v[i].Y < v[j].Y)
        dp[i] = max(dp[j] + 1, dp[i]);

    cout << *max_element(begin(dp), end(dp)) << "\n";
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
