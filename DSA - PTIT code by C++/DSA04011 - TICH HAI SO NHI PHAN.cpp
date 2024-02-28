/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04011 - TICH HAI SO NHI PHAN
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
    string a, b;
    cin >> a >> b;
    ll v1 = 0, v2 = 0;

    FORD(i, a.size() - 1, 0)
    v1 += (a[i] - '0') * pow(2, a.size() - 1 - i);
    FORD(i, b.size() - 1, 0)
    v2 += (b[i] - '0') * pow(2, b.size() - 1 - i);

    ll tong = v1 * v2;
    cout << tong << "\n";
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