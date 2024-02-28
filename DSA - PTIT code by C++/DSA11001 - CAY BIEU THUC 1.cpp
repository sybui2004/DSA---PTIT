/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11001 - CAY BIEU THUC 1
*/
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
    stack<string> st;

    for (char i : s)
    {
        if (i >= 'a' && i <= 'z')
            st.push(string(1, i));
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push(b + i + a);
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