/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06035 - DAY TAM GIAC DAI NHAT
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

int n;

void solve ()
{
	cin >> n;
	vector <int> a(n+1), l(n+1), r(n+1);

	FORU (i, 1, n+1) cin >> a[i];

	FORU (i, 1, n+1)
	{
		if (a[i] > a[i-1]) l[i] = l[i-1] + 1;
		else l[i] = 1;
	}

	FORD (i, n, 1)
	{
		if (a[i] > a[i+1]) r[i] = r[i+1] + 1;
		else r[i] = 1;
	}

	int ans = 0;

	FORU (i, 1, n+1) ans = max (ans, l[i] + r[i] - 1);
	
	cout << ans << "\n";
}

int main()
{
	fast;
	int t = 1;
	cin >> t;

	while (t--)
	{
		solve ();
	}
}