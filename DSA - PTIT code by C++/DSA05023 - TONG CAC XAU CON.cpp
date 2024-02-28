/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05023 - TONG CAC XAU CON
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
    string s;
    cin >> s;
    int n = s.size();

    ll ans = 0;

    FORU(i, 0, n)
    FORU(j, i, n)
    {
        string res = "";

        FORU(k, i, j + 1)
        res += s[k];

        ans += stoll(res);
    }

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
