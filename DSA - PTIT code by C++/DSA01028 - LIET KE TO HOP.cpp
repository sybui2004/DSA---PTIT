/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01028 - LIET KE TO HOP
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

ll mod = 1e9 + 7;

int n, k;
int a[25], b[25];

void Try(int i)
{
	FORU(j, b[i - 1] + 1, n + 1)
	{
		b[i] = j;
		if (i == k)
		{
			FORU(p, 1, k + 1)
				cout << a[b[p]] << " ";
			cout << "\n";
		}
		else
			Try(i + 1);
	}
}

void solve()
{
	reset(a);
	reset(b);

	cin >> n >> k;
	set<int> s;
	int x;

	FORU(i, 0, n)
	{
		cin >> x;
		s.insert(x);
	}

	n = s.size();
	int pos = 1;

	FORU(i, 1, n + 1)
	b[i] = i;

	for (int i : s)
		a[pos++] = i;

	Try(1);
}

int main()
{

	fast;
	int t = 1;
	// cin >> t;

	while (t--)
	{
		solve();
	}
}