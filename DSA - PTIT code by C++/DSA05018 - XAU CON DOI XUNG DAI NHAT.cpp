/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05018 - XAU CON DOI XUNG DAI NHAT
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
	string s;
    cin >> s;
    int n = s.size(), ans = -1e9;
	vector<vi> dp(n + 1, vi(n + 1, 0));

	for (int i = n-1; i >= 0; i--)
	{
		for (int j = i; j <= n-1; j++)
		{
			if(i == j) dp[i][j] = 1;
			else if (s[i] == s[j]) 
			{
				if(i+1 == j) dp[i][j] = 2;
				else if (dp[i+1][j-1]) dp[i][j] = dp[i+1][j-1] + 2;
			}
			ans = max(ans, dp[i][j]);
		}
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
