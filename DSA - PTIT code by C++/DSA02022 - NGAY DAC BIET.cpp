/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02022 - NGAY DAC BIET
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

void solve()
{
	vector <string> v1 = {"02", "20", "22"}, v2 = {"02"}, v3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    FORU (i, 0, 3)
            FORU (k, 0, 8)
                cout << v1[i] + "/" + v2[0] + "/" + v3[k] << "\n";
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