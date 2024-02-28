/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06023 - SAP XEP DOI CHO TRUC TIEP
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

    int step = 1;

    FORU(i, 0, n - 1)
    {
        FORU(j, i + 1, n)
        if (a[i] > a[j])
            swap(a[i], a[j]);
        cout << "Buoc " << step << ": ";

        FORU(k, 0, n)
            cout << a[k] << " ";

        step++;
        cout << "\n";
    }
}

int main()
{
    fast;
    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }
}