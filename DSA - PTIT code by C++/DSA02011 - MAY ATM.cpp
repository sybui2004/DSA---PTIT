/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02011 - MAY ATM
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

int n, S, ans;
vi a;

void Try (int i, int s, int res)
{
	if(i == n)
	{
		if(s == S) ans = min(ans, res);
		return;
	}
	if(s > S || res > ans) return;
	Try (i + 1, s, res);
	Try (i + 1, s + a[i], res + 1);
}

void solve()
{
	ans = 1e9;
	cin >> n >> S;
	a.clear();
	a.resize(n);
	
	for (int &i : a) cin >> i;
	
	Try (0, 0, 0);

	cout << ((ans == 1e9) ? -1 : ans) << "\n";

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
