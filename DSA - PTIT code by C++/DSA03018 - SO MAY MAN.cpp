/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03018 - SO MAY MAN
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
    int n;
    cin >> n;
    int cnt4 = 0, cnt7 = 0;

    while (1)
    {
        if (n < 4 && n)
        {
            cout << "-1\n";
            return;
        }
        if (n % 7 == 0)
        {
            cnt7 += n / 7;
            break;
        }
        if (n >= 4)
        {
            cnt4++;
            n -= 4;
        }
    }

    FORU(i, 0, cnt4)
        cout << 4;
    FORU(i, 0, cnt7)
        cout << 7;
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