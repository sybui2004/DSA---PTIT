/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02016 - SAP XEP QUAN HAU 1
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

int n, cot[15], cheo1[30], cheo2[30], ans;

void Try(int i)
{

	FORU (j, 1, n+1)
	{
		if (!cot[j] && !cheo1[i -j + n] && !cheo2[i+j-1])
		{
			cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 1;

			if (i==n) ans++;
			else Try(i+1);

			cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 0;
		}
	}

}

void solve()
{
	cin >> n;
	ans = 0;
	reset(cot);
	reset(cheo1);
	reset(cheo2);
	Try(1);

	cout << ans << "\n";
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