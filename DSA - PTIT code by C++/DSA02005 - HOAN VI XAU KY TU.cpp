/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02005 - HOAN VI XAU KY TU
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

int n, k;
vector<char> a;
int b[25];

void solve()
{
	a.clear();
	string x;
	cin >> x;
	n = x.size();
	a.pb('0');

	FORU(i, 0, n)
	a.pb(x[i]);

	FORU(i, 1, n + 1)
	b[i] = i;

	do
	{
		FORU(i, 1, n + 1)
			cout << a[b[i]];
		cout << " ";
	} while (next_permutation(b + 1, b + n + 1));

	cout << "\n";
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