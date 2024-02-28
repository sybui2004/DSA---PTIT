/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03001 - DOI TIEN
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

void solve()
{
	cin >> n;

	int ans = 0;
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

	FORD(i, 9, 0)
	{
		ans += n / a[i];
		n %= a[i];
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