/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02035 - HOAN VI CAC CHU SO
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

int n, k;

void solve()
{
    cin >> n >> k;

    vector<string> v(n);

    for (string &i : v)
        cin >> i;

    vi a(k);

    FORU(i, 0, k)
    a[i] = i;

    string ma = v[0], mi = v[0];
    int ans = pow(10, k);
    do
    {
        ma = "", mi = "";
        FORU(p, 0, k)
        {
            ma += '0';
            mi += '9';
        }
        string tmp = "";
        for (string i : v)
        {
            tmp = "";
            for (int j : a)
                tmp += i[j];
            ma = max(ma, tmp);
            mi = min(mi, tmp);
        }
        ans = min(ans, stoi(ma) - stoi(mi));
    } while (next_permutation(all(a)));

    cout << ans;
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