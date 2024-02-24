/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSAKT060 - TRUY VAN DOI XUNG
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


void solve()
{
	string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--)
    {
        char x;
        cin >> x;
        if (x == 'q')
        {
            int l, r;
            cin >> l >> r;
            string tmp = s.substr(l-1, r-l+1);
            string tmp2 = tmp;
            reverse(all(tmp));
            if (tmp == tmp2) cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            int u;
            cin >> u >> x;
            s[u-1] = x;
        }
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