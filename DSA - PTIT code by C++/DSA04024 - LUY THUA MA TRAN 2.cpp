/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04024 - LUY THUA MA TRAN 2
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

struct matran
{
    ll m[15][15] = {};
};

matran nhan(matran a, matran b, int n)
{
    matran kq;
    FORU(i, 0, n)
    FORU(j, 0, n)
    FORU(k, 0, n)
    {
        kq.m[i][j] += ((a.m[i][k] % mod) * (b.m[k][j] % mod)) % mod;
        kq.m[i][j] %= mod;
    }
    return kq;
}

matran pow(matran a, int n, int k)
{
    if (k == 1)
        return a;
    matran q = pow(a, n, k / 2);
    if (k % 2 == 0)
        return nhan(q, q, n);
    else
        return nhan(a, nhan(q, q, n), n);
}

void nhap(matran &x, int n)
{
    FORU(i, 0, n)
    FORU(j, 0, n)
    cin >> x.m[i][j];
}

void xuat(matran x, int n)
{
    ll ans = 0;
    FORU(i, 0, n)
    ans += x.m[i][n - 1];
    cout << ans % mod << "\n";
}

void solve()
{
    matran x, ans;
    int n, k;
    cin >> n >> k;
    nhap(x, n);
    ans = pow(x, n, k);
    xuat(ans, n);
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