/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01006 - HOAN VI NGUOC
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

void solve ()
{
    int n;
    cin >> n;
    vi a(n);
    vector <vi> v;
    FORU(i, 0, n) a[i] = i+1;
    do
    {
        v.pb(a);
    } while (next_permutation(a.begin(), a.end()));

    int k = v.size();
    
    FORD(i, k-1, 0)
    {
        FORU (j, 0, n) cout << v[i][j];
        cout << " ";
    }

    cout << "\n";
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