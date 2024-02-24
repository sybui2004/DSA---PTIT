/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07005 - BIEU THUC TUONG DUONG
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
    stack <char> st;
    
    for (char i : s)
    {
        if (i != ')') st.push(i);
        else
        {
            stack <char> tmp;

            while(!st.empty() && st.top() != '(')
            {
                tmp.push(st.top());
                st.pop();
            }

            st.pop();

            if (!st.empty() && st.top() == '-')
            {
                while (!tmp.empty())
                {
                    if (tmp.top() == '+') st.push('-');
                    else if (tmp.top() == '-') st.push('+');
                    else st.push(tmp.top());
                    tmp.pop();
                }
            }
            else
            {
                while (!tmp.empty())
                {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
        }
    }

    string ans = "";

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    
    reverse(all(ans));

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