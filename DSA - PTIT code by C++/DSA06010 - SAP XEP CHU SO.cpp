/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06010 - SAP XEP CHU SO
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
    map<char, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        FORU(i, 0, s.size())
        m[s[i]] = 1;
    }

    for (auto x : m)
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