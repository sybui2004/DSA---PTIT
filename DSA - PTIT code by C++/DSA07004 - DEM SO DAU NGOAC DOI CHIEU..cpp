/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07004 - DEM SO DAU NGOAC DOI CHIEU
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
	int ans = 0;
	while (!s.empty())
	{
		int pos = s.find("()");
		if (pos != -1) s.erase(pos, 2);
		else
		{
			if (s[0] == ')')
			{
				s[0] = '(';
				ans++;
			}
			int size = s.size()-1;
			if (s[size] == '(')
			{
				s[size] = ')';
				ans++;
			}
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
