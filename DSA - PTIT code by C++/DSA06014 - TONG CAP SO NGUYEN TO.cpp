/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06014 - TONG CAP SO NGUYEN TO
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

int check(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (!(n & 1))
        return 0;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (!(n % i))
            return 0;
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    if (n < 4)
        cout << 0 << "\n";
    else if (n == 4)
        cout << "2 2\n";
    else if (n == 5)
        cout << "2 3\n";
    else
    {
        FORU(i, 2, n >> 1 + 1)
        {
            if (check(i) && check(n - i))
            {
                cout << i << " " << n - i << "\n";
                return;
            }
        }
        cout << "-1\n";
    }
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