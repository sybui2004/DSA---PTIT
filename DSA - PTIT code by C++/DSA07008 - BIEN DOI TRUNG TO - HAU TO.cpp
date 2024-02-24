/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07008 - BIEN DOI TRUNG TO - HAU TO
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
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
    stack<char> st;

    for (char i : s)
    {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
            cout << i;
        else if (i == '(')
            st.push(i);
        else if (i == '+' || i == '-')
        {
            while (!st.empty() && st.top() != '(' && st.top() != ')')
            {
                cout << st.top();
                st.pop();
            }
            st.push(i);
        }
        else if (i == '*' || i == '/')
        {
            while (!st.empty() && st.top() != '(' && st.top() != ')' && st.top() != '+' && st.top() != '-')
            {
                cout << st.top();
                st.pop();
            }
            st.push(i);
        }
        else if (i == ')')
        {
            while (st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && st.top() != '(' && st.top() != ')' && st.top() != '+' && st.top() != '-' && st.top() != '*' && st.top() != '/')
            {
                cout << st.top();
                st.pop();
            }
            st.push(i);
        }
    }

    while (!st.empty())
    {
        if (st.top() == '(')
            st.pop();
        else
        {
            cout << st.top();
            st.pop();
        }
    }
    cout << "\n";
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
