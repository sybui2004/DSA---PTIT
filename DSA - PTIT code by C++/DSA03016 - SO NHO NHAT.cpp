/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03016 - SO NHO NHAT
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

int s, d;

void solve()
{
	cin >> s >> d;

	if (d * 9 < s)
	{
		cout << "-1\n";
		return;
	}

	string ans = "";

	while (s > 9 && d > 1) 
	{
		s -= 9;
		d--;
		ans += '9';
	}
	
	if (s <= 9 && d > 1)
	{
		string res = "";
		d--;
		res += "1";
		s--;
		int tmp = d-1;

		while (tmp--) 
			res += '0';

		res += to_string(s);

		cout << res + ans << "\n";
		return;
	}
	else if (s <= 9 && d == 1)
	{
		ans = to_string(s) + ans;
		cout << ans << "\n";
		return;
	}

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