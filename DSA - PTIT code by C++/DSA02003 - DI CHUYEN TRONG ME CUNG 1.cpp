/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02003 - DI CHUYEN TRONG ME CUNG 1
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
vector <string> ans;
int a[15][15];

void Try (int i, int j, string res)
{
	if (i == n && j == n) ans.pb(res);
	if (i + 1 <= n && a[i+1][j] == 1) Try (i+1, j, res + 'D');
	if (j + 1 <= n && a[i][j+1] == 1) Try (i, j+1, res + 'R');
}

void solve()
{
	cin >> n;

	FORU (i, 1, n+1)
		FORU (j, 1, n+1) cin >> a[i][j];

	if (!a[1][1])
	{
		cout << "-1\n";
		return;
	}

	ans.clear();

	Try (1, 1, "");

	if (ans.empty())
	{
		cout << "-1\n";
		return;
	}

	sort (all(ans));

	for (string i : ans) cout << i << " ";
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