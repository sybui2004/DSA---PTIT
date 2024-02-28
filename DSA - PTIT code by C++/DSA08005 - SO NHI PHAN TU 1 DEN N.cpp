/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08005 - SO NHI PHAN TU 1 DEN N
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

int change(string s)
{
    int n = 0;
    FORD(i, s.size() - 1, 0)
    n += pow(2, s.size() - i - 1) * (s[i] - '0');
    return n;
}

void solve()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");

    while (!q.empty())
    {
        string res = q.front();
        q.pop();
        if (change(res) <= n)
            cout << res << " ";
        if (change(res + "0") <= n)
            q.push(res + "0");
        if (change(res + "1") <= n)
            q.push(res + "1");
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