/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA03023 - SAP XEP VIEN BI
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

// Đổi chỗ xanh với đỏ trước
// Sau đó đổi chỗ trắng với 2 màu còn lại
void solve()
{
	int n, ans = 0, cntX_in_D = 0, cntD_in_X = 0;
    string s;
    cin >> n >> s;
    int cntX = 0, cntT = 0, cntD = 0;

    for (char i : s)
    {
        if (i == 'X') cntX++;
        else if (i == 'T') cntT++;
        else cntD++;
    }

    FORU (i, 0, cntX) 
        if (s[i] != 'X')
        {
            ans++;
            if (s[i] == 'D') cntD_in_X++;
        }
    
    FORU (i, n - cntD, n) 
        if (s[i] != 'D')
        {
            ans++;
            if (s[i] == 'X') cntX_in_D++;
        }

    cout << ans - min(cntX_in_D, cntD_in_X) << "\n";

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
