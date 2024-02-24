/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07045 - GO BAN PHIM
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
    stack <char> l, r;

    for (char i : s)
    {
        if (i == '<')
        {
            if (!l.empty())
            {
                r.push(l.top());
                l.pop();
            }
        }
        else if (i == '>')
        {
            if (!r.empty())
            {
                l.push(r.top());
                r.pop();
            }
        }
        else if (i == '-')
        {
            if (!l.empty())
                l.pop();
        }
        else l.push(i);
    }

    string ans = "";

    while(!l.empty())
    {
        ans += l.top();
        l.pop();
    }

    reverse(all(ans));

    while(!r.empty())
    {
        ans += r.top();
        r.pop();
    }
    
    cout << ans;
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
