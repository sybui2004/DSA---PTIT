/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01027 - HOAN VI DAY SO
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

int n;

void solve()
{
	cin >> n;
	vi a(n), b(n);
    mii m;

	for (int &i: a) cin >> i;

	sort(all(a));

	FORU (i, 0, n)
	{
		b[i] = i;
		m[i] = a[i];
	}

	do
	{
		for (int i: b) cout << m[i] << " ";
		cout << "\n";
	} while (next_permutation(all(b)));
	
}

int main()
{

	fast;
	int t = 1;
	//cin >> t;

	while (t--)
	{
		solve();
	}
}