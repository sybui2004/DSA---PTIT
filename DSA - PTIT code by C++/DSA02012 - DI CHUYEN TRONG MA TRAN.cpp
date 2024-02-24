/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02012 - DI CHUYEN TRONG MA TRAN
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

int m, n;
int a[105][105];
set <vector <pi>> s;
void Try (int i, int j, vector <pi> tmp)
{
	if (i == m && j == n) s.insert(tmp);
	vector <pi> tmp1 = tmp, tmp2 = tmp;
	if (i + 1 <= m)
	{
		tmp1.pb({i+1, j});
		Try (i+1, j, tmp1);
	}
	if (j + 1 <= n)
	{
		tmp2.pb({i, j+1});
		Try (i, j+1, tmp2);
	}
}

void solve()
{
	cin >> m >> n;

	FORU (i, 1, m+1)
		FORU (j, 1, n+1) cin >> a[i][j];

	s.clear();
	vector <pi> res;
	res.pb({1,1});

	Try(1, 1, res);

	cout << s.size() << "\n";
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