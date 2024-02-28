/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11025 - CAY NHI PHAN TIM KIEM CAN BANG 2
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

ll MOD = 1e9 + 7;

vi a;

void process(int l, int r)
{
	if (l >= r)
		return;
	int m = (r + l) >> 1;
	cout << a[m] << " ";
	process(m + 1, r);
	process(l, m);
}

void solve()
{
	int n;
	cin >> n;
	a.clear();
	a.resize(n);
	for (int &i : a)
		cin >> i;

	sort(all(a), greater<>());

	process(0, n);
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