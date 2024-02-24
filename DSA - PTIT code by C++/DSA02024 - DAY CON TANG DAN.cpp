/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02024 - DAY CON TANG DAN
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
vi a, res;
vector <vi > ans;

bool cmp(vi a, vi b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    x.pop_back();
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

int check (vi a)
{
	if (a.size() < 2) return 0;
 	vi b = a;
	sort(all(a));
	
	FORU (i, 0, a.size())
	{
		if (a[i] != b[i]) return 0;
	}
	return 1;
}


void Try (int i)
{
	if (i == n)
	{
		if (check (res)) ans.pb(res);
		return;
	}
	res.pb(a[i]);
	Try (i+1);
	res.pop_back();
	Try (i+1);
}


void solve()
{
	cin >> n;
	a.resize(n);

	for (int &i : a) cin >> i;

	Try (0);

	sort(all(ans), cmp);

	for (auto i : ans)
	{
		for (int j : i) cout << j << " ";
		cout << "\n";
	}
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