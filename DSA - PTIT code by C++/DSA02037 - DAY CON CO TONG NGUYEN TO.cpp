/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02037 - DAY CON CO TONG NGUYEN TO
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

ll MOD = 1e9 + 7;

int n;
vi a;
set<vi> v;

bool check(int sum)
{
    for (int i = 2; i <= sqrt(sum); i++)
        if (!(sum % i))
            return 0;
    return sum > 1;
}

void Try(int i, int sum, vi res)
{
    if (check(sum))
    {
        sort(all(res), greater<int>());
        v.insert(res);
    }
    if (i == n)
        return;
    vi tmp = res;
    tmp.push_back(a[i]);
    Try(i + 1, sum + a[i], tmp);
    Try(i + 1, sum, res);
}
void solve()
{
    cin >> n;
    a.clear();
    v.clear();
    a.resize(n);

    for (int &i : a)
        cin >> i;

    sort(all(a));

    vi tmp;

    Try(0, 0, tmp);

    for (vi i : v)
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