/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03020 - BIEU THUC DUNG
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

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int pos = 0, ans = 0;

    for (char i : s)
    {
        if (i == '[')
            st.push(i);
        else
        {
            if (st.empty())
            {
                int j = pos;
                while (s[j] == ']')
                    j++;
                swap(i, s[j]);
                ans += (j - pos);
                st.push(i);
            }
            else
                st.pop();
        }
        pos++;
    }

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