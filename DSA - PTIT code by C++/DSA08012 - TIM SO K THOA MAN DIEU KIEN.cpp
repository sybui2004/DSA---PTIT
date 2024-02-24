/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08012 - TIM SO K THOA MAN DIEU KIEN
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
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
    string s = to_string(n);
    int m[100] = {};
    for (char i : s)
    {
        if (i > '5')
            return 0;
        m[i]++;
    }

    for (char i = '0'; i <= '9'; i++)
        if (m[i] > 1)
            return 0;
    return 1;
}

void solve()
{
    int L, R;
    cin >> L >> R;
    int ans = 0;

    FORU(i, L, R + 1)
    {
        if (check(i))
            ans++;
    }

    cout << ans << "\n";
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
