/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06037 - SAP XEP DOAN CON
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

bool cmp1(pair <int, pi> x, pair <int, pi> y)
{
    if (x.X == y.X) return x.Y.X < y.Y.X;
    return x.X < y.X;
}

bool cmp2(pair <int, pi> x, pair <int, pi> y)
{
    return x.Y.X < y.Y.X;
}
void solve()
{
	int n;
	cin >> n;

    vector <pair <int, pi> > v(n);

    FORU (i, 0, n)
    {
        cin >> v[i].X;
        v[i].Y.X = i;
    }

    sort (all(v), cmp1);

    FORU (i, 0, n) v[i].Y.Y = i;

    sort (all(v), cmp2);

    int pos = 0;
    vi ans;

    FORU (i, 0, n-1)
    {
        pos = max (pos, v[i].Y.Y);
        if (pos == i) ans.pb(i);
    }

    if (ans.empty())
    {
        cout << "0\n\n";
        return;
    }

    cout << ans.size() << "\n";
    
    for (int i : ans) cout << i+1 << " ";
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
