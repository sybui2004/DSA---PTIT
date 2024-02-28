/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04012 - TICH DA THUC
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

ll mod = 1e9 + 7;

void solve()
{
    int m, n;
    cin >> m >> n;
    vi p(m), q(n), ans(m + n - 1, 0);

    for (int &i : p)
        cin >> i;
    for (int &i : q)
        cin >> i;

    FORU(i, 0, m)
    FORU(j, 0, n)
    ans[i + j] += p[i] * q[j];

    FORU(i, 0, m + n - 1)
        cout << ans[i] << " ";

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