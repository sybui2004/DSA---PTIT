/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10004 - DUONG DI VA CHU TRINH EULER VOI DO THI VO HUONG
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
    mii m;
    int v, e;
    cin >> v >> e;
    FORU(i, 0, e)
    {
        int x, y;
        cin >> x >> y;
        m[x]++;
        m[y]++;
    }

    int cnt = 0;

    for (auto i : m)
    {
        if (i.Y % 2)
            cnt++;
    }

    if (cnt == 0)
        cout << "2\n";
    else if (cnt == 2)
        cout << "1\n";
    else
        cout << "0\n";
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