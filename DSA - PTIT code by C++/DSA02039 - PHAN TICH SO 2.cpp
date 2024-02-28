/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02039 - PHAN TICH SO 2
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

int a[31], b[31], n;

vector<vi> v;

bool cmp(vi a, vi b)
{
    int res = min(a.size(), b.size());
    FORU(i, 0, res)
    {
        if (a[i] > b[i])
            return true;
        else if (a[i] < b[i])
            return false;
    }
}
void add(int k)
{
    vi tmp;
    FORU(i, 1, k + 1)
    tmp.push_back(a[i]);
    sort(all(tmp), greater<int>());
    v.push_back(tmp);
}
void Try(int i)
{

    for (int j = a[i - 1]; j <= ((n - b[i - 1]) / 2); j++)
    {
        a[i] = j;
        b[i] = b[i - 1] + j;
        Try(i + 1);
    }
    a[i] = n - b[i - 1];
    add(i);
}

void solve()
{
    v.clear();
    reset(a);
    reset(b);
    cin >> n;
    a[0] = 1;
    b[0] = 0;

    Try(1);

    sort(all(v), cmp);

    cout << v.size() << "\n";
    for (auto i : v)
    {
        cout << "(";

        FORU(j, 0, i.size())
        {
            if (j != i.size() - 1)
                cout << i[j] << " ";
            else
                cout << i[j];
        }

        cout << ") ";
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