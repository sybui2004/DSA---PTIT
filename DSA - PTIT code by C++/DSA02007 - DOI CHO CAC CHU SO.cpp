/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02007 - DOI CHO CAC CHU SO
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

int k;
string ans, s, res;
void Try(int cnt, int i)
{
    if (cnt == k || res == s || i == s.size() - 1)
    {
        ans = max(ans, s);
        return;
    }

    Try(cnt, i + 1);

    FORU(j, i + 1, s.size())
    {
        if (s[i] < s[j])
        {
            swap(s[i], s[j]);
            Try(cnt + 1, i + 1);
            swap(s[i], s[j]);
        }
    }
}

void solve()
{
    cin >> k >> s;
    ans = res = s;
    sort(all(res), greater<char>());

    if (res[0] == '0' && res[res.size() - 1] == '0')
    {
        cout << "0\n";
        return;
    }

    Try(0, 0);
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