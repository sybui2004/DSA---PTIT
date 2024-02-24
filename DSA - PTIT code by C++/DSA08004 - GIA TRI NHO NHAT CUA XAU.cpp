/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08004 - GIA TRI NHO NHAT CUA XAU
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
#define mii map <int, int> 
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

void solve()
{
	int k;
	string s;
	cin >> k >> s;

	map <int, ll> m;

	for (char i : s) m[i - '0']++;

	priority_queue <ll> pq;

	for (auto i : m) pq.push(i.Y);

	while (k--)
	{
		ll top = pq.top();
		pq.pop();
		pq.push(top - 1);
	}

	ll ans = 0;

	while (!pq.empty())
	{
		ans += pq.top() * pq.top();
		pq.pop();
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
