/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08017 - SO LOC PHAT 1
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

int f[20];

void init()
{
    f[1] = 2;
    FORU(i, 2, 15)
    f[i] = f[i - 1] + (1 << i);
}

void solve()
{
    int n;
    cin >> n;
    vector<string> ans;
    deque<string> dq;
    dq.pb("6");
    dq.pb("8");

    while (n--)
    {
        deque<string> tmp;
        while (!dq.empty())
        {
            string res = dq.front();
            dq.pop_front();
            tmp.pb(res + "6");
            tmp.pb(res + "8");
            ans.pb(res);
        }
        dq = tmp;
    }
    reverse(all(ans));
    for (string i : ans)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    fast;
    init();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}