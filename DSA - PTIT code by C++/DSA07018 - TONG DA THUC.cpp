/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07018 - TONG DA THUC
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

map <int, int> m;
string a, b;
vector <pi> ans;

void process (string s)
{
    s += " ";
    int heso = 0, bac = 0, change = 0;
    for (char i : s)
    {
        if (isdigit(i))
        {
            if (!change)
                heso = heso * 10 + (i - '0');
            else
                bac = bac * 10 + (i - '0');
        }
        else if (i == '^') change = 1;
        else if (i == ' ')
        {
            m[bac] += heso;
            heso = bac = change = 0;
        }
    }
}

void solve ()
{
    getline(cin, a);
    getline(cin, b);
    m.clear();
    ans.clear();
    process(a);
    process(b);

    for (auto i : m)
        ans.push_back(i);
    
    FORD (i, ans.size() - 1, 1)
        cout << ans[i].Y << "*x^" << ans[i].X << " + ";
    
    cout << ans[0].Y << "*x^" << ans[0].X << "\n";

}


int main()
{
	fast;
	int t = 1;
	cin >> t;
    cin.ignore();
    
	while (t--)
	{
		solve();
	}
}