/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01018 - TAP CON LIEN KE PHIA TRUOC
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
    int a[k];
    FORU(i, 0, k)
        cin >> a[i];

    if (k == 1)
    {
        if (a[0] == 1)
            cout << n << " \n";
        else
            cout << a[0] - 1 << " \n";
        return;
    }

    int check = 0;

    FORU(i, 0, k)
    {
        if (a[i] != i + 1)
        {
            check = 1;
            break;
        }
    }

    if (check == 0)
    {
        FORU(i, n - k + 1, n + 1)
            cout << i << " ";
        cout << "\n";
        return;
    }

    check = 0;
    FORU(i, 1, k)
    {
        if (a[i] != a[i - 1] + 1)
            check = 1;
    }

    if (check == 0)
    {
        cout << a[0] - 1 << " ";
        FORU(i, n - k + 2, n + 1)
            cout << i << " ";
        cout << "\n";
        return;
    }

    FORD(i, k - 1, 0)
    {
        if (a[i] > a[i - 1] + 1)
        {
            a[i]--;
            FORU(i, 0, k)
                cout << a[i] << " ";
            cout << "\n";
            return;
        }
        a[i] = n - k + i + 1;
    }
    FORU(i, 0, k)
        cout << a[i] << " ";
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
