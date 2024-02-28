/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02029 - THAP HA NOI
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

int n;

void Try(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << a << " -> " << c << "\n";
		return;
	}
	Try(n - 1, a, c, b);
	Try(1, a, b, c);
	Try(n - 1, b, a, c);
}

void solve()
{
	cin >> n;
	Try(n, 'A', 'B', 'C');
}

int main()
{

	fast;
	int t = 1;
	// cin >> t;

	while (t--)
	{
		solve();
	}
}