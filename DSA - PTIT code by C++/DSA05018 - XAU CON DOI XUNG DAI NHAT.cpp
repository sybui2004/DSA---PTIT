/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05018 - XAU CON DOI XUNG DAI NHAT
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
    int n = s.size(), ans = 1, l, r;
    // xau doi xung chan
    FORU(i, 0, n)
    {
        l = r = i;
        while (l >= 0 && r < n)
        {
            if (s[l] == s[r])
            {
                ans = max(ans, r - l + 1);
                l--;
                r++;
            }
            else
                break;
        }
    }
    // xau doi xung le
    FORU(i, 0, n - 1)
    {
        l = i, r = i + 1;
        while (l >= 0 && r < n)
        {
            if (s[l] == s[r])
            {
                ans = max(ans, r - l + 1);
                l--;
                r++;
            }
            else
                break;
        }
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
