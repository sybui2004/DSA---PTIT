/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11012 - CAY NHI PHAN BANG NHAU
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
	cin.ignore();
	string s1, s2;
	getline(cin, s1);
	cin >> n;
	cin.ignore();
	getline(cin, s2);
	if (s1 != s2)
		cout << "0\n";
	else
		cout << "1\n";
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