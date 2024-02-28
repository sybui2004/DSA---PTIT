/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07006 - XOA DAU NGOAC
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

string s;
set<string> ans;

void Try(string s)
{
    stack<int> st;
    vector<pi> pos;

    FORU(i, 0, s.size())
    {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')')
        {
            pos.pb({st.top(), i});
            st.pop();
        }
    }

    if (pos.empty())
        return;

    for (auto i : pos)
    {
        string tmp = s;
        tmp.erase(tmp.begin() + i.Y);
        tmp.erase(tmp.begin() + i.X);

        if (!ans.count(tmp))
        {
            ans.insert(tmp);
            Try(tmp);
        }
    }
}

void solve()
{
    cin >> s;

    Try(s);

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
