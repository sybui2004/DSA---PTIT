/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02041 - BIEN DOI VE 1
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
    int n;
    cin >> n;
    queue<pi> q;
    q.push({n, 0});

    while (!q.empty())
    {
        pi front = q.front();
        q.pop();

        if (front.X == 1)
        {
            cout << front.Y << "\n";
            return;
        }

        if (front.X % 2 == 0)
            q.push({front.X / 2, front.Y + 1});

        if (front.X % 3 == 0)
            q.push({front.X / 3, front.Y + 1});

        q.push({front.X - 1, front.Y + 1});
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