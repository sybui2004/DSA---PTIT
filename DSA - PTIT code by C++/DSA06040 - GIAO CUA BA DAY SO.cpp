/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06040 - GIAO CUA BA DAY SO
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
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vl a(n1), b(n2), c(n3);

    for (ll &i : a)
        cin >> i;

    for (ll &i : b)
        cin >> i;

    for (ll &i : c)
        cin >> i;

    vl ans;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && a[i] == c[k])
        {
            ans.pb(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }

    if (ans.empty())
        cout << "-1";
    else
        for (ll i : ans)
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