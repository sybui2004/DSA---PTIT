/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04010 - DAY CON LIEN TIEP CO TONG LON NHAT
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
    int n, x, tmp = 0, ans = -1e9;
    cin >> n;
    FORU(i, 0, n)
    {
        cin >> x;
        tmp = max(x, tmp + x);
        ans = max(ans, tmp);
    }
    if (ans == -1e9)
        cout << "0\n";
    else
        cout << ans << "\n";
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