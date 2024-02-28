/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01009 - XAU AB DAC BIET
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

int n, k;

int check(string s)
{
    int cnt = 0;
    FORU(i, 0, n - k + 1)
    {
        int dem = 0;
        FORU(j, 0, k)
        if (s[i + j] == 'A')
            dem++;
        if (dem == k)
            cnt++;
    }

    return (cnt == 1);
}

vector<string> ans;
void Try(string s)
{
    if (s.size() == n)
    {
        if (check(s))
            ans.push_back(s);
        return;
    }
    Try(s + 'A');
    Try(s + 'B');
}
void solve()
{
    cin >> n >> k;
    Try("");

    cout << ans.size() << "\n";
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