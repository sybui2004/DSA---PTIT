/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07003 - KIEM TRA BIEU THUC SO HOC
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
    getline(cin, s);
    stack<char> st;

    FORU(i, 0, s.size())
    {
        if (s[i] != ')')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            int kt = 0;

            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    kt = 1;
                if (c == '(')
                    break;
            }

            if (!kt)
            {
                cout << "Yes\n";
                return;
            }
        }
    }

    cout << "No\n";
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solve();
    }
}