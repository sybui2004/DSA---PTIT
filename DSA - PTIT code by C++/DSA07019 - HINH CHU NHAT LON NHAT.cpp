/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07019 - HINH CHU NHAT LON NHAT
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
    ll ans = 0;
    cin >> n;
    vl a(n);

    for (ll &i : a)
        cin >> i;

    FORU(i, 0, n)
    {
        ll temp1 = 0, temp2 = 0;
        FORD(j, i - 1, 0)
        {
            if (a[j] >= a[i])
                temp1++;
            else
                break;
        }
        FORU(j, i, n)
        {
            if (a[j] >= a[i])
                temp2++;
            else
                break;
        }
        ans = max(ans, a[i] * (temp1 + temp2));
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