/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07014 - TINH GIA TRI BIEU THUC TIEN TO
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
    int n = s.size();

    FORD(i, n - 1, 0)
    {
        if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int res;
            if (s[i] == '+')
                res = x + y;
            else if (s[i] == '-')
                res = x - y;
            else if (s[i] == '*')
                res = x * y;
            else
                res = x / y;
            st.push(res);
        }
    }

    cout << st.top() << "\n";
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