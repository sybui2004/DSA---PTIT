/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01025 - DAT TEN - 2
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

int n, k, kt;
vi a;

void sinhTH()
{
	int i = k;

	while (i > 0 && a[i] == n - k + i)
		i--;

	if (i == 0)
		kt = 1;
	else
	{
		a[i]++;
		FORU(j, i + 1, k + 1)
		a[j] = a[j - 1] + 1;
	}
}

void solve()
{
	kt = 0;
	cin >> n >> k;
	a.resize(k + 1);

	FORU(i, 1, k + 1)
	a[i] = i;

	FORU(i, 0, k)
		cout << char(i + 'A');

	cout << "\n";

	while (!kt)
	{
		sinhTH();
		if (!kt)
		{
			FORU(i, 1, k + 1)
				cout << char('A' + a[i] - 1);
			cout << "\n";
		}
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