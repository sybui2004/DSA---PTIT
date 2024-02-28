/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06031 - PHAN TU LON NHAT TRONG DAY CON
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);

    for (int &i : a)
        cin >> i;

    deque<int> dq;

    FORU(i, 0, n)
    {
        if (dq.front() == i - k)
            dq.pop_front();

        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();

        dq.push_back(i);
        if (i + 1 >= k)
            cout << a[dq.front()] << " ";
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