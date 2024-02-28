/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
CTDL_001 - THUAT TOAN SINH
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

string s;
int check(string s)
{
	for (char i : s)
		if (i == '0')
			return 1;
	return 0;
}

void sinhNP()
{
	int i = s.size() - 1;
	while (i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	s[i] = '1';
}

void solve()
{
	int n;
	cin >> n;
	int temp = n;
	n >>= 1;
	FORU(i, 0, n)
	s += '0';
	do
	{
		if (!(temp & 1))
		{
			for (char i : s)
				cout << i << " ";
			FORD(i, n - 1, 0)
				cout << s[i] << " ";
			cout << "\n";
		}
		else
		{
			for (char i : s)
				cout << i << " ";
			cout << "0 ";
			FORD(i, n - 1, 0)
				cout << s[i] << " ";
			cout << "\n";
			for (char i : s)
				cout << i << " ";
			cout << "1 ";
			FORD(i, n - 1, 0)
				cout << s[i] << " ";
			cout << "\n";
		}
		sinhNP();
	} while (check(s));

	FORU(i, 0, temp)
		cout << "1 ";
	cout << "\n";
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