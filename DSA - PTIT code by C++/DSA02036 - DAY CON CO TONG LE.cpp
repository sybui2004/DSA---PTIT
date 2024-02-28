/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02036 - DAY CON CO TONG LE
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

int n;
vi a;
set <vi> v;
 

void Try(int i, int sum, vi res)
{
	if(sum & 1)
	{
		sort(all(res), greater <int> ());
		v.insert(res);
	}
	if (i == n) return;
	vi tmp = res;
	tmp.push_back(a[i]);
	Try(i+1, sum + a[i], tmp);
	Try(i+1, sum, res);
        
}
void solve()
{
	cin >> n;
	a.clear();
	v.clear();
	a.resize(n);

	for (int &i : a) cin >> i;

	sort(all(a));

	Try(0, 0, {});

	for (vi i : v)
	{
		for (int j : i) cout << j << " ";
		cout << "\n";
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