/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07002 - NGAN XEP 2
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
    int n;
    cin >> n;
    stack<int> st;
    string s;
    int a;

    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> a;
            st.push(a);
        }
        else if (s == "POP")
        {
            if (!st.empty())
                st.pop();
        }
        else
        {
            if (st.empty())
                cout << "NONE\n";
            else
                cout << st.top() << "\n";
        }
    }
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