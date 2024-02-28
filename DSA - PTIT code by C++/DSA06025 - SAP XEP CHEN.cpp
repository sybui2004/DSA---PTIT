/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06025 - SAP XEP CHEN
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
    vi a(n);

    for (int &i : a)
        cin >> i;

    int step = 0;

    FORU(i, 0, n)
    {
        int j = i;

        while (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j], a[j - 1]);
            j--;
        }

        cout << "Buoc " << step << ": ";

        FORU(k, 0, i + 1)
            cout << a[k] << " ";

        step++;
        cout << "\n";
    }
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