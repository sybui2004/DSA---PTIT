/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05007 - TONG LON NHAT CUA DAY CON KHONG KE NHAU
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
    vl a(n + 1), f(n + 1);

    FORU(i, 1, n + 1)
    {
        cin >> a[i];
        f[i] = (i == 1) ? a[i] : max(f[i - 1], f[i - 2] + a[i]);
    }

    cout << *max_element(all(f)) << "\n";
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