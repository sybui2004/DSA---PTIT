/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08009 - BIEN DOI S - T
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
    int s, t;
    cin >> s >> t;
    queue<pi> q;
    q.push({s, 0});
    mii m;

    if (s == t)
    {
        cout << "0\n";
        return;
    }

    while (!q.empty())
    {
        pi front = q.front();
        q.pop();

        if (front.X - 1 == t || front.X * 2 == t)
        {
            cout << front.Y + 1 << "\n";
            return;
        }

        if (!m[front.X * 2] && front.X < t)
        {
            q.push({front.X * 2, front.Y + 1});
            m[front.X * 2] = 1;
        }

        if (!m[front.X - 1] && front.X - 1 > 0)
        {
            q.push({front.X - 1, front.Y + 1});
            m[front.X - 1] = 1;
        }
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
