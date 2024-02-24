/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02028 - CHIA DEU
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

int n, k, ans, s;
vi a;
void Try (int i, int cnt)
{
    if (i == n && cnt == k)
    {
        ans++;
        return;
    }

    int res = 0;
    FORU (j, i, n)
    {
        res += a[j];
        if (res == s) Try(j+1, cnt + 1);
    }

}
void solve()
{
	cin >> n >> k;
    a.resize(n);

    for (int &i : a) 
    {
        cin >> i;
        s += i;
    }

    if (s % k)
    {
        cout << "0";
        return;
    }
    s /= k;
    Try (0, 0);

    cout << ans;
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
