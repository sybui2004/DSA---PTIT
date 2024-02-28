/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07021 - DAY NGOAC DUNG DAI NHAT
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
    stack<pair<char, int>> st;
    int n = s.size();
    vi f(n, 0);
    FORU(i, 0, n)
    {
        if (s[i] == ')' && !st.empty() && st.top().X == '(')
        {
            f[i] = f[i - 1] + 2;
            if (st.top().Y != 0)
                f[i] += f[st.top().Y - 1];
            st.pop();
        }
        else
            st.push({s[i], i});
    }

    cout << *max_element(all(f)) << "\n";
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