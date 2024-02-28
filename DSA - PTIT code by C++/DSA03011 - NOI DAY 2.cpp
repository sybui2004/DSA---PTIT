/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03011 - NỐI DÂY 2
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

int n, k;

void solve()
{
	cin >> n;
	vl a(n);

	priority_queue<ll, vl, greater<ll>> pq;

	for (ll &i : a)
	{
		cin >> i;
		pq.push(i);
	}

	ll ans = 0;

	while (pq.size() > 1)
	{
		ll a = pq.top();
		pq.pop();
		ll b = pq.top();
		pq.pop();
		ll res = (a % mod + b % mod) % mod;
		pq.push(res);
		ans = (ans + res) % mod;
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