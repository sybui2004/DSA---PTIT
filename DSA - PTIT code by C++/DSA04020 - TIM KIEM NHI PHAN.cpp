/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04020 - TIM KIEM NHI PHAN
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

int n, k;

void solve()
{
    cin >> n >> k;
    vi a(n);

    for (int &i : a)
        cin >> i;

    int p = lower_bound(all(a), k) - begin(a);

    if (a[p] == k)
        cout << p + 1 << "\n";
    else
        cout << "NO\n";
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