/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01012 - MA GRAY 1
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
int a[15];

void Try(int i, int choice)
{
    if (n == i)
    {
        FORU(i, 0, n)
            cout << a[i];
        cout << " ";
    }
    else
    {
        if (choice)
            a[i] = 0;
        else
            a[i] = 1;
        Try(i + 1, 1);
        if (choice)
            a[i] = 1;
        else
            a[i] = 0;
        Try(i + 1, 0);
    }
}

void solve()
{
    cin >> n;

    FORU(i, 0, n)
    a[i] = 0;

    Try(0, 1);

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