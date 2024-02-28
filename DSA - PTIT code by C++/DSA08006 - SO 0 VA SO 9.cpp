/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08006 - SO 0 VA SO 9
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
    queue<int> q;
    q.push(9);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        if (front % n == 0)
        {
            cout << front << "\n";
            return;
        }
        q.push(front * 10);
        q.push(front * 10 + 9);
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