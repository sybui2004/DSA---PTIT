/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02045 - TAP CON CUA XAU KY TU
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

int n;
string s;
set<string> ans;

int x[20];

void check()
{
    string tmp = "";
    FORU(i, 0, n)
    {
        if (x[i] == 1)
            tmp += s[i];
    }
    ans.insert(tmp);
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n - 1)
            check();
        else
            Try(i + 1);
    }
}
void solve()
{
    cin >> n >> s;
    ans.clear();
    reset(x);
    Try(0);

    for (string i : ans)
        cout << i << " ";

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