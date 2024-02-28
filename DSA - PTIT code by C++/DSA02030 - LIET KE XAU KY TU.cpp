/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02030 - LIET KE XAU KY TU
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

int n, k;
char c;
vector<string> ans;

void Try(int i, string res)
{
    if (i == k + 1)
    {
        ans.pb(res);
        return;
    }
    char cur;
    if (res.empty())
        cur = 'A';
    else
        cur = res[res.size() - 1];
    for (char j = cur; j <= c; j++)
        Try(i + 1, res + j);
}

void solve()
{
    cin >> c >> k;

    ans.clear();

    n = c - 'A' + 1;
    string res = "";
    Try(1, res);

    for (string i : ans)
        cout << i << "\n";
}

int main()
{

    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}