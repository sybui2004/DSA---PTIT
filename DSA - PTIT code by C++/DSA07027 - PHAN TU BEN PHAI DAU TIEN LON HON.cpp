/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07027 - PHAN TU BEN PHAI DAU TIEN LON HON
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
    vi a(n), r(n);

    for (int &i : a)
        cin >> i;

    stack<int> st;

    FORD(i, n - 1, 0)
    {
        while (!st.empty() && st.top() <= a[i])
            st.pop();

        if (st.empty())
            r[i] = -1;
        else
            r[i] = st.top();

        st.push(a[i]);
    }

    for (int i : r)
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