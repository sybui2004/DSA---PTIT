/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03014 - SO KHOI LAP PHUONG
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

int check (string s1, string s2)
{
    int m = s1.size(), n = s2.size();
	int L[m + 1][n + 1] = {};

	FORU(i, 1, m + 1)
		FORU(j, 1, n + 1)
		{
			L[i][j] = (s1[i - 1] == s2[j - 1]) ? (L[i - 1][j - 1] + 1) : max(L[i - 1][j], L[i][j - 1]);

		}

	return L[m][n] == m;
}

vl s;

void init ()
{
    for (ll i = 1; i <= 1000000; i++) 
    {
        ll res = i*i*i;
        s.push_back(res);
    }
}
void solve()
{
    ll n;
    cin >> n;
    int p = lower_bound(begin(s), end(s), n) - begin(s);

    while (p > -1)
    {
        if (check(to_string(s[p]), to_string(n))) 
        {
            cout << s[p] << "\n";
            return;
        }
        p--;
    }
	

    cout << "-1\n";
}

int main()
{
	fast;
    init();
	int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}
}
