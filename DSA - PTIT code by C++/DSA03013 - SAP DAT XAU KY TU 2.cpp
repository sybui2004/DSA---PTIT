/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03013 - SAP DAT XAU KY TU 2
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
    int d;
    cin >> d;
    string s;
    cin >> s;

    int cnt[300] = {0};

    for (char i : s)
        cnt[i]++;

    int dem = 0;

    for (char i = 'a'; i <= 'z'; i++)
        dem = max(dem, cnt[i]);

    for (char i = 'A'; i <= 'Z'; i++)
        dem = max(dem, cnt[i]);

    if (dem <= ceil(1.0 * s.size() / d))
        cout << "1\n";
    else
        cout << "-1\n";
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