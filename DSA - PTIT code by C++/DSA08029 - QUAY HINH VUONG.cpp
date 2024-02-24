/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08029 - QUAY HINH VUONG
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

vi right(vi a)
{
	int a1 = a[1],a2 = a[2], a4 = a[4], a5 = a[5];
	a[1] = a4;
	a[2] = a1;
	a[5] = a2;
	a[4] = a5;
	return a;
}

vi left(vi a)
{
	int a0 = a[0],a1 = a[1], a3 = a[3], a4 = a[4];
	a[0] = a3;
	a[1] = a0;
	a[4] = a1;
	a[3] = a4;
	return a;
}

vi a, b;

void solve()
{
    a.clear();
    b.clear();
    a.resize(6);
    b.resize(6);

    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;

    int dem = 0;
    map <vi , int> m;
    queue <pair <vi, int> > q;
    q.push({a, 0});
    m[a] = 1;
    while(!q.empty())
    {
        auto x = q.front();
        q.pop();

        if(x.X == b)
        {
            cout << x.Y << "\n";
            return;
        }

        vi r, l;
        r = right(x.X);
        l = left(x.X);

        if(!m[r])
        {
            q.push({r, x.Y + 1});
            m[r] = 1;
        }
        if(!m[l])
        {
            q.push({l, x.Y + 1});
            m[l] = 1;
        }
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
