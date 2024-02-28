/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01021 - TO HOP TIEP THEO
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

int a[45], n, k, kt, b[45];

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
	reset(a);
	reset(b);

	int ans = 0;
	cin >> n >> k;
	mii m1, m2;

	FORU(i, 1, k + 1)
		cin >> a[i],
		b[i] = a[i], m1[a[i]] = 1;

	sinhTH();

	FORU(i, 1, k + 1)
	m2[a[i]] = 1;

	if (kt)
		cout << k << "\n";
	else
	{
		FORU(i, 1, k + 1)
		if (!m2[b[i]])
			ans++;
		cout << ans << "\n";
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