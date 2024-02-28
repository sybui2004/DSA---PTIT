/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02031 - GHEP CHU CAI
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

ll f[100005];
int n, k;
char a[100];
int check()
{
    FORU(i, 2, n)
    {
        if ((a[i] == 'A' || a[i] == 'E') && a[i - 1] != 'A' && a[i - 1] != 'E' && a[i + 1] != 'A' && a[i + 1] != 'E')
            return 0;
    }

    return 1;
}

void solve()
{
    char c;
    cin >> c;
    n = c - 'A' + 1;

    FORU(i, 1, n + 1)
    a[i] = 'A' + i - 1;

    int kt = 1;
loop:;
    while (kt)
    {
        if (check())
        {
            FORU(i, 1, n + 1)
            cout << a[i];
            cout << "\n";
        }
        kt = 0;
        FORD(i, n - 1, 1)
        {
            if (a[i] < a[i + 1])
            {
                kt = 1;
                sort(a + i + 1, a + n + 1);
                FORU(j, i + 1, n + 1)
                {
                    if (a[j] > a[i])
                    {
                        swap(a[i], a[j]);
                        goto loop;
                    }
                }
            }
        }
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