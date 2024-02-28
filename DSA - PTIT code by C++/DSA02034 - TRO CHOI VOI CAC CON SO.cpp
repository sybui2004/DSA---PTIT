/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02034 - TRO CHOI VOI CAC CON SO
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

int check(vi a)
{
	int n = a.size();

	FORU(i, 0, n - 1)
	{
		if (abs(a[i] - a[i + 1]) == 1)
			return 0;
	}
	return 1;
}

int n;

void solve()
{
	cin >> n;
	vi a(n), b(n);

	FORU(i, 0, n)
	a[i] = i + 1,
	b[i] = i;

	do
	{
		vi c;
		for (int i : b)
			c.pb(a[i]);
		if (check(c))
		{
			for (int i : c)
				cout << i;
			cout << "\n";
		}

	} while (next_permutation(all(b)));
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