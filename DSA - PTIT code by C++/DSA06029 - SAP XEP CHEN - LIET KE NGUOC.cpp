/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06029 - SAP XEP CHEN - LIET KE NGUOC
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

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vector<vi> ans;

    for (int &i : a)
        cin >> i;

    FORU (i, 0, n)
	{
		int j = i;
		
		while (j > 0 && a[j -1 ] > a[j])
		{
			swap (a[j], a[j-1]);
			j--;
		}

		vi tmp(begin(a), begin(a) + i+1);
		ans.pb(tmp);
	}

    FORD(i, ans.size() - 1, 0)
    {
        cout << "Buoc " << i << ": ";

        FORU(j, 0, ans[i].size())
        cout << ans[i][j] << " ";

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