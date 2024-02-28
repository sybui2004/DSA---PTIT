/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07015 - TINH TOAN GIA TRI BIEU THUC TRUNG TO
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

ll mod = 1e9 + 7;

string s;

ll calc(ll a, ll b, char c)
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
}

int check(char c)
{
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

void solve()
{
    cin >> s;
    stack<ll> dig;
    stack<char> st;

    FORU(i, 0, s.size())
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ll cur1 = dig.top();
                dig.pop();
                ll cur2 = dig.top();
                dig.pop();
                char dau = st.top();
                st.pop();
                dig.push(calc(cur2, cur1, dau));
            }

            if (!st.empty())
                st.pop();
        }
        else if (isdigit(s[i]))
        {
            ll cur = 0;

            while (i < s.size() && isdigit(s[i]))
            {
                cur = cur * 10 + (s[i] - '0');
                i++;
            }

            dig.push(cur);
            i--;
        }

        else
        {
            while (!st.empty() && check(st.top()) >= check(s[i]))
            {
                ll cur1 = dig.top();
                dig.pop();
                ll cur2 = dig.top();
                dig.pop();
                char dau = st.top();
                st.pop();
                dig.push(calc(cur2, cur1, dau));
            }

            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        ll cur1 = dig.top();
        dig.pop();
        ll cur2 = dig.top();
        dig.pop();
        char dau = st.top();
        st.pop();
        dig.push(calc(cur2, cur1, dau));
    }

    cout << dig.top() << "\n";
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