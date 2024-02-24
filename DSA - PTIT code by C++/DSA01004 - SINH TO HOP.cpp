/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01004 - SINH TO HOP
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

int a[20], n, k;

void display()
{
    FORU (i, 1, k+1) cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for(int j = a[i-1] + 1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i==k) display();
        else Try(i+1);
    }
}

void solve ()
{
    cin >> n >> k;
    a[0] = 0;
    Try(1);
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