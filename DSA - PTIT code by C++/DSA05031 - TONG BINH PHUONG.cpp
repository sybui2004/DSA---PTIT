/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05031 - TONG BINH PHUONG
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

int n;
vi a(10005, 1e9);
void process()
{
    a[0] = 0;
    FORU(i, 1, 10005)
    {
        for (int j = 1; j <= sqrt(i); j++)
            if (a[i - j * j] != 1e9)
                a[i] = min(a[i], a[i - j * j] + 1);
    }
}
void solve()
{
    cin >> n;
    cout << a[n] << "\n";
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    process();
    while (t--)
    {
        solve();
    }
}