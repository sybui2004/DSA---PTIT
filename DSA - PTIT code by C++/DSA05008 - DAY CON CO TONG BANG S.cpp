/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05008 - DAY CON CO TONG BANG S
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
    int n, s;
    cin >> n >> s;
    vi a(n), f(s + 1, 0);
    f[0] = 1;

    for (int &i : a)
        cin >> i;

    FORU(i, 0, n)
    FORD(j, s, a[i])
    if (f[j - a[i]] == 1)
        f[j] = 1;

    if (f[s])
        cout << "YES\n";
    else
        cout << "NO\n";
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