/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02013 - SO NGUYEN TO
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

int check[205], n, p, s;
vi snt;
vector<vi> ans;
void sieve()
{
    check[0] = 1;
    check[1] = 1;

    for (int i = 2; i * i <= 200; i++)
    {
        if (check[i] == 0)
        {
            for (int j = i * i; j <= 200; j += i)
                check[j] = 1;
        }
    }

    FORU(i, 2, 200)
    {
        if (!check[i])
            snt.pb(i);
    }
}

void Try(int pos, int val, vi res)
{
    if (res.size() == n)
    {
        if (s == val)
            ans.pb(res);
        return;
    }

    FORU(i, pos, snt.size())
    {
        if (val + snt[i] <= s)
        {
            res.pb(snt[i]);
            Try(i + 1, val + snt[i], res);
            res.pop_back();
        }
    }
}
void solve()
{
    ans.clear();
    n, p, s;
    cin >> n >> p >> s;

    int pos = upper_bound(all(snt), p) - snt.begin();

    vi res;

    Try(pos, 0, res);

    cout << ans.size() << "\n";

    for (vi i : ans)
    {
        for (int j : i)
            cout << j << " ";
        cout << "\n";
    }
}

int main()
{
    fast;
    sieve();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}