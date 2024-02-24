/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02021 - KY TU DAC BIET
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

string s;

char Try (ll k, ll n)
{
    if (k < s.size()) return s[k];
    if (k == n / 2) return Try(k - 1, n / 2);
	else if (k < n / 2) return Try(k, n / 2);
	return Try(k - n / 2 - 1, n / 2);
}
void solve()
{
    ll n, k;
    cin >> s >> k;
    k--;
    n = s.size();
    while (n <= k) n *= 2;
    cout << Try (k, n) << "\n";
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