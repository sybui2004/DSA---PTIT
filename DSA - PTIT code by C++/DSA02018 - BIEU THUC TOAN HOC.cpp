/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02018 - BIEU THUC TOAN HOC
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

//(((A o1 B) o2 C) o3 D) o4 E

vector <vi> dau;
vi tmp(4, 0);

void Try(int i)
{
	for (int j = 0; j <= 2; j++)
    {
		tmp[i] = j;
		if (i == 3) dau.push_back(tmp);
		else Try(i + 1);
	}
}

void solve ()
{
    int a[6];
    FORU (i, 1, 6) cin >> a[i];
    int v[5] = {1, 2, 3, 4, 5};
    do
    {
        for (vi i : dau)
        {
            int sum = a[v[0]];
            FORU (j, 0, 4)
            {
                if (i[j] == 0) sum -= a[v[j+1]];
                else if (i[j] == 1) sum += a[v[j+1]];
                else sum *= a[v[j+1]];  
            }
            if (sum == 23)
            {
                cout << "YES\n";
                return;
            }
        }
    } while (next_permutation(v, v+5));

    cout << "NO\n";
    
}

int main()
{
	fast;
    Try(0);
	int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}
}