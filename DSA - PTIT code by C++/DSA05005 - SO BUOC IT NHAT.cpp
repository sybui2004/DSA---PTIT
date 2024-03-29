/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05005 - SO BUOC IT NHAT
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

void solve()
{
	int n;
	cin >> n;
    vi a(n), L(n, 1);

	for (int &i : a) cin >> i;
 
    FORU (i, 0, n)
        FORU (j, 0, i)
            if(a[i] >= a[j] && L[i] < L[j] + 1)
                L[i] = L[j] + 1;
    
	cout << n - *max_element(all(L)) << "\n";


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