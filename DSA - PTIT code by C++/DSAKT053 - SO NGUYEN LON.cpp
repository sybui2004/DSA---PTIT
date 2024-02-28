/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSAKT053 - SO NGUYEN LON
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
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size(), n = s2.size();
    int L[m + 1][n + 1] = {};

    FORU(i, 1, m + 1)
    FORU(j, 1, n + 1)
    L[i][j] = (s1[i - 1] == s2[j - 1]) ? (L[i - 1][j - 1] + 1) : max(L[i - 1][j], L[i][j - 1]);

    cout << L[m][n] << "\n";
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