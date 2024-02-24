/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02020 - SO NHO NHAT CO N UOC SO
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

ll MOD = 1e9 + 7;

int snt[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
ll res;
int n;
void Try(int i, ll x, ll y)
{
	if (y > n) return;
	if (y == n) res = min(res, x);
	for (int j = 1;; j++)
    {
		if (x * snt[i] > res)break;
        x *= snt[i];
		Try(i + 1, x, y * (j + 1));
	}
}

void solve ()
{
    cin >> n;
    res = 1e18;
    Try(0, 1, 1);
    cout << res << "\n";
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