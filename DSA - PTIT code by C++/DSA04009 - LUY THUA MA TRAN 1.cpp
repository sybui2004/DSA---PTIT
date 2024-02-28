/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA04009 - LUY THUA MA TRAN 1
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

int n, k;

vector<vi> du(vector<vi> a, vector<vi> b)
{
    vector<vi> ans(n, vi(n, 0));

    FORU(i, 0, n)
    FORU(j, 0, n)
    FORU(k, 0, n)
    ans[i][j] = (ans[i][j] + (1ll * a[i][k] * b[k][j]) % mod) % mod;

    return ans;
}

vector<vi> pow(vector<vi> a, int k)
{
    if (k == 1)
        return a;
    vector<vi> temp = pow(a, k / 2);
    vector<vi> result = du(temp, temp);
    if (k % 2)
        return du(result, a);
    else
        return result;
}

void solve()
{
    cin >> n >> k;
    vector<vi> a(n, vi(n, 0));

    for (auto &i : a)
        for (int &j : i)
            cin >> j;

    vector<vi> res = pow(a, k);

    for (auto i : res)
    {
        for (int j : i)
            cout << j << " ";
        cout << "\n";
    }
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