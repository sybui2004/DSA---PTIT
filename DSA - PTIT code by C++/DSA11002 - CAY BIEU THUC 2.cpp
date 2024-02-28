/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11002 - CAY BIEU THUC 2
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
int cal(int a, int b, string c)
{
    if (c == "+")
        return a + b;
    if (c == "-")
        return a - b;
    if (c == "*")
        return a * b;
    if (c == "/")
        return a / b;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    stack<string> dau;
    queue<int> so;
    stack<int> st;
    while (n--)
    {
        cin >> s;
        if (s == "+" || s == "-" || s == "*" || s == "/")
            dau.push(s);
        else
            st.push(stoi(s));
    }

    while (!st.empty())
    {
        so.push(st.top());
        st.pop();
    }

    queue<int> tmp;

    while (1)
    {
        tmp = queue<int>{};
        while (so.size() > 1)
        {
            int top1 = so.front();
            so.pop();
            int top2 = so.front();
            so.pop();
            tmp.push(cal(top2, top1, dau.top()));
            dau.pop();
        }

        if (tmp.size() == 1)
        {
            cout << tmp.front() << "\n";
            return;
        }
        else
            so = tmp;
    }
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