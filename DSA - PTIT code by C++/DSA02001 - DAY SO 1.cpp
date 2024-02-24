/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02001 - DAY SO 1
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

ll mod = 1e9 + 7;

void solve()
{
	int n;
	cin >> n;
	vi a, b;
	a.resize(n);

	for (int &i: a) cin >> i;

	cout << "[";
	FORU (i, 0, n-1) cout << a[i] << " ";
	cout << a[n-1] << "]\n";
	FORU (i, 0, n-1)
	{
		b.clear();

		FORU (j, 0, n-i-1)
			b.pb(a[j] + a[j+1]);

		cout << "[";

		FORU (k, 0, n-i-2) cout << b[k] << " ";

		cout << b[b.size()-1] << "]\n";
		a.clear();

		for (int p : b) a.pb(p);
	}
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