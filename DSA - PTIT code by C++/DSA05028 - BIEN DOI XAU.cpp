/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05028 - BIEN DOI XAU
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
	string str1, str2;
	cin >> str1 >> str2;

	int a = str1.size(), b = str2.size();

	int dp[a+1][b+1];
	reset(dp);

	FORU (i, 0, a+1) dp[i][0] = i;
	FORU (i, 0, b+1) dp[0][i] = i;

	FORU (i, 1, a+1)
		FORU (j, 1, b+1)
		{
			if (str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;
		}

	cout << dp[a][b] << "\n";
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
