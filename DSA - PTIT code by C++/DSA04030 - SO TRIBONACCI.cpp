/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04030 - SO TRIBONACCI
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

ll MOD = 1e15 + 7;

ll ans[5] = {1, 3, 6, 12, 23};

struct matrix
{
	ll f[4][4] = {
		{1, 0, 0, 0},
		{0, 1, 1, 0},
		{1, 1, 0, 1},
		{0, 1, 0, 0}};
};

ll tichNum(ll a, ll b)
{
	if (b <= 1) return (a % MOD) * b;
	ll tmp = tichNum(a, b / 2) % MOD; 

	if (b % 2)return tmp + tmp + a % MOD;
	return tmp + tmp;
}

matrix tichMatrix(matrix A, matrix B) {
	matrix C;
	FORU (i, 0, 4)
		FORU (j, 0, 4)
        {
			C.f[i][j] = 0;
			FORU (k, 0, 4)
				C.f[i][j] = (C.f[i][j] + tichNum(A.f[i][k], B.f[k][j])) % MOD;
		}

	return C;
}

matrix Pow(matrix X, ll k)
{
	if (k == 1)return X;
	matrix tmp = Pow(X, k / 2);
    matrix cur = tichMatrix(tmp, tmp);

	if(k % 2) return tichMatrix(cur, X);
    return cur;
}

ll Tribonaci(ll n)
{
	if (n <= 5) return ans[n - 1];
	matrix X;
	matrix S = Pow(X, n+2);
	return S.f[2][0] - 1;
}

void solve()
{
    int n;
    cin >> n;
    cout << Tribonaci(n) << "\n";
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
