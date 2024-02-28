/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07016 - BIEU THUC TANG GIAM
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
string s;
vi a;

bool check(vi a)
{
    FORU(i, 0, s.size())
    {
        if ((s[i] == 'D' && a[i] < a[i + 1]) || (s[i] == 'I' && a[i] > a[i + 1]))
            return false;
    }

    return true;
}

void solve()
{
    a.clear();
    cin >> s;
    n = s.size() + 1;
    a.resize(n);

    FORU(i, 0, n)
    a[i] = i + 1;

    do
    {
        if (check(a))
        {
            for (int i : a)
                cout << i;
            cout << "\n";
            return;
        }
    } while (next_permutation(all(a)));
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
