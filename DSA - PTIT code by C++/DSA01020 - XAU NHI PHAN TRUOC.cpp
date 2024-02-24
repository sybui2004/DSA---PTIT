/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01020 - XAU NHI PHAN TRUOC
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

ll mod = 1e9 + 7;

string s;

void solve ()
{
	s = "";
	cin >> s;
	int check = 1, pos = 0;

	FORD (i, s.size() - 1 , 0)
	{
		if (s[i] == '1') 
		{
			s[i] = '0';
			check = 0;
			pos = i;
			break;
		}
	}

	FORU (i, pos+1, s.size()) s[i] = '1';

	if(check) 
		FORU (i, 0, s.size()) s[i] = '1';

	cout << s << "\n";
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