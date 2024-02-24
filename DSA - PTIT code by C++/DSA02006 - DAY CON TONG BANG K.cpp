/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02006 - DAY CON TONG BANG K
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
vi a;
vector < vi> ans;

void Try (int i, int k, vi res)
{
	if (k == 0)
	{
		ans.push_back(res);
		return;
	}
	if (k < 0 || i >= n) return;
	vi tmp = res;
	tmp.pb(a[i]);
	Try (i+1, k - a[i], tmp);
	Try (i+1, k, res);
}

void solve()
{
	ans.clear();
	cin >> n >> k;
	a.resize(n);
	
	for (int &i: a) cin >> i;

	sort(all(a));
	vi res;

	Try(0, k, res);

	if (ans.empty())
	{
		cout << "-1\n";
		return;
	}

	for (auto i: ans)
	{
		cout << "[";
		FORU (j, 0, i.size() - 1) cout << i[j] << " ";
		cout << i[i.size() -1] << "] ";
	}
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