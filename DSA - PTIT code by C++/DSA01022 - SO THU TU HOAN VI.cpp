/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01022 - SO THU TU HOAN VI
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

int n, k;
vi a, b;
int check ()
{
	FORU (i, 0, n)
		if (a[i] != b[i]) return 0;

	return 1;
}

void solve()
{
	cin >> n;
	b.resize(n);
	a.resize(n);

	for (int &i: a) cin >> i;

	FORU (i, 0, n) b[i] = i+1;

	int ans = 0;
	do
	{
		if (!check()) ans++;
		else break;
	} while (next_permutation(begin(b), end(b)));

	cout << ans + 1 << "\n";

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