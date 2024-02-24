/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
CTDL_002 - TONG DAY CON = K
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
int check(string s)
{
    for (char i: s)
        if(i == '0') return 1;
    return 0;
}

void sinhNP()
{
    int i = s.size()-1;
    while(i >= 0 && s[i]=='1')
    {
        s[i] = '0';
        i--;
    }
    s[i] = '1';
}

void solve ()
{
    int n, k;
	cin >> n >> k;
	vi a(n);
	int sum = 0;
	for (int &i : a)
    {
        cin >> i;
        sum += i;
    }

	FORU (i, 0, n) s += '0';
	int cnt = 0;
	while (check(s))
	{
		int tong = 0;
		FORU (i, 0, n)
		{
			if(s[i] == '1') tong += a[i];
			if(tong > k) break;
		}
		if(tong == k)
		{
			cnt++;
			FORU(i, 0, n)
			{
				if(s[i] == '1') cout << a[i] << " ";
			}
			cout << "\n";
		}
		sinhNP();
	}
	if(sum == k)
	{
		cnt++;
		FORU (i, 0, n) cout << a[i] << " ";
		cout << "\n";
	}
	cout << cnt;
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