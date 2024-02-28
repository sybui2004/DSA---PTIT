/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07110 - KIEM TRA DAY NGOAC DUNG
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
    stack<int> st;

    FORU(i, 0, s.size())
    {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
            st.pop();
        else if (s[i] == '}' && !st.empty() && s[st.top()] == '{')
            st.pop();
        else
            st.push(i);
    }

    if (st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
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