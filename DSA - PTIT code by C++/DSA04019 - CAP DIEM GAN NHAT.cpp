/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04019 - CAP DIEM GAN NHAT
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

double distance(pair <double, double> a, pair <double, double> b)
{
    return sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2));
}

void solve()
{
	int n;
    cin >> n;
    vector <pair <double, double> > a(n), b(n);

    FORU (i, 0, n)
    {
        cin >> a[i].X >> a[i].Y;
        b[i].X = a[i].Y;
        b[i].Y = a[i].X;
    }

    sort(all(a));
    sort(all(b));
    double ans = 1e9;

    FORU (i, 0, n-1) ans = min(ans, min(distance(a[i], a[i+1]), distance(b[i], b[i+1])));

    cout << setprecision(6) << fixed << ans << "\n";
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
