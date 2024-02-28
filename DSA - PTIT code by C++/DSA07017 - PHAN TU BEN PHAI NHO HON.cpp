/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07017 - PHAN TU BEN PHAI NHO HON
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
    vi v(n), ans(n);

    for (int &i : v)
        cin >> i;

    if (n == 1)
    {
        cout << "-1\n";
        return;
    }

    stack<int> st;
    int r;

    FORD(i, n - 1, 0)
    {
        while (!st.empty() && v[i] >= v[st.top()])
            st.pop();
        if (st.empty())
            r = -1;
        else
            r = st.top();
        st.push(i);

        if (r == -1)
            ans[i] = -1;
        else
        {
            int pos = r, check = 0;
            FORU(j, pos + 1, n)
            {
                if (v[j] < v[pos])
                {
                    ans[i] = v[j];
                    check = 1;
                    break;
                }
            }
            if (!check)
                ans[i] = -1;
        }
    }

    for (int i : ans)
        cout << i << " ";
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