/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04014 - CAP NGHICH THE
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

int n;

ll merge(int a[], int l, int m, int r)
{
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	ll i = 0, j = 0, cnt = 0;
	while(i < x.size() && j < y.size())
    {
		if(x[i] <= y[j]) a[l] = x[i], l++, i++;
		else{
			cnt += x.size() - i;
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while(i < x.size()) a[l] = x[i], l++, i++;
	while(j < y.size()) a[l] = y[j], l++, j++;
	return cnt;
}

ll mergeSort(int a[], int l, int r)
{
	ll dem = 0;
	if(l < r){
		int m = (l+r)/2;
		dem += mergeSort(a,l,m);
		dem += mergeSort(a,m+1,r);
		dem += merge(a,l,m, r);
	}
	return dem;
}

void solve()
{
	cin >> n;
	int a[n];
	for (int &i : a) cin >> i;
	cout << mergeSort(a,0,n-1) << "\n";
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