/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03005 - CHIA MANG THANH HAI MANG CON CO TONG LON NHAT
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
	int n, k;
	cin >> n >> k;
	vl v(n);
	ll ans = 0;
	for (ll &i : v)
		cin >> i, ans += i;

	sort(all(v));

	k = min(k, n - k);

	FORU(i, 0, k)
	ans -= 2 * v[i];

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