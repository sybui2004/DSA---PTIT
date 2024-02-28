/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04017 - PHAN TU KHAC NHAU
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
    int n;
    cin >> n;
    vl a(n), b(n - 1);

    for (ll &i : a)
        cin >> i;
    for (ll &i : b)
        cin >> i;
    int ans = 0;
    FORU(i, 0, n - 1)
    if (b[i] != a[i])
    {
        cout << i + 1 << "\n";
        return;
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