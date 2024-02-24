/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05024 - TONG BANG K
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
	int n, k;
	cin >> n >> k;
	vi a(n);
	vl dp(10001, 0);

	for (int &i : a) cin >> i;
	dp[0] = 1;
	
	FORU (i, 1, 10000)
	{
		for (int j : a)
		{
			if (i >= j) dp[i] = (dp[i] + dp[i-j]) % MOD;
		}
	}

	cout << dp[k] << "\n";
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
