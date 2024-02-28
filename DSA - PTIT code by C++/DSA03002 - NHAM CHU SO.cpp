/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03002 - NHAM CHU SO
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

int solvemin(int a, int b)
{
	string s1 = to_string(a), s2 = to_string(b);

	FORU(i, 0, s1.size())
	if (s1[i] == '6')
		s1[i] = '5';

	FORU(i, 0, s2.size())
	if (s2[i] == '6')
		s2[i] = '5';

	int val1 = 0, val2 = 0;

	FORU(i, 0, s1.size())
	val1 = val1 * 10 + (s1[i] - '0');
	FORU(i, 0, s2.size())
	val2 = val2 * 10 + (s2[i] - '0');

	return val1 + val2;
}

int solvemax(int a, int b)
{
	string s1 = to_string(a), s2 = to_string(b);

	FORU(i, 0, s1.size())
	if (s1[i] == '5')
		s1[i] = '6';

	FORU(i, 0, s2.size())
	if (s2[i] == '5')
		s2[i] = '6';

	int val1 = 0, val2 = 0;

	FORU(i, 0, s1.size())
	val1 = val1 * 10 + (s1[i] - '0');
	FORU(i, 0, s2.size())
	val2 = val2 * 10 + (s2[i] - '0');

	return val1 + val2;
}
void solve()
{
	int a, b;
	cin >> a >> b;

	cout << solvemin(a, b) << " " << solvemax(a, b);
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