/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01001 - XAU NHI PHAN KE TIEP
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
    for (char i : s)
        if (i == '0') return 1;
    
    return 0;
}
void sinhNP()
{
    int i = s.size() - 1;
    while(i >= 0 && s[i]=='1'){
        s[i] = '0';
        i--;
    }
    s[i] = '1';
}

void solve ()
{
    cin >> s;
    int n = s.size();
    if(!check(s))
    {
        FORU (i, 0, n) cout << "0";
        cout << "\n";
        return;
    }
    sinhNP();
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