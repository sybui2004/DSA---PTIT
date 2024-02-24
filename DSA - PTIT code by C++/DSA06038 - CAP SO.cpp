/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06038 - CAP SO
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
#define tree node*
ll MOD = 1e9 + 7;

int n;
vi a;

ll bit[1000005];

void update(int i)
{
	for(;i < 1000005; i += i & -i) bit[i]++;
}

int get(int i)
{
	int res = 0;
	for(; i; i -= i & -i) res += bit[i];
	return res;
}

void solve()
{	
	cin >> n;
	a.resize(n);
	for (int &i : a) cin >> i;
	
	int ans = 0, last = n;
	FORD (i, n-1, 0)
    {
		if(a[i] & 1)
        {
			FORU (j, i+1, last) update(a[j]);
			last = i; 
		}
		else ans += get(a[i] - 1);
	}	
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
