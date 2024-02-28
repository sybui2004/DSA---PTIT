/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01011 - HOAN VI TIEP THEO CUA CHUOI SO
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

vector<pair<int, string>> ans;

void solve()
{
    int n;
    vi a;
    string s;
    cin >> n >> s;

    for (char i : s)
        a.pb(i - '0');

    if (next_permutation(all(a)))
    {
        string tmp = "";
        for (int i : a)
            tmp += (i + '0');
        ans.pb({n, tmp});
    }
    else
        ans.pb({n, "BIGGEST"});
}

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.X < b.X;
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

    sort(all(ans), cmp);

    for (auto i : ans)
        cout << i.X << " " << i.Y << "\n";
}