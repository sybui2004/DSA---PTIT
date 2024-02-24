/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02009 - CHIA MANG
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
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

int n, k, s, kt;
int A[25], visited[25];

void Try(int cnt, int sum)
{
    if (sum > s || kt) return;

    if (cnt == k)
    {
        kt = 1;
        return;
    }

    FORU (i, 0, n)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            if (sum == s) Try(cnt + 1, 0);
            else if (sum < s) Try(cnt, sum + A[i]);
        }
        visited[i] = 0;
    }
}

void solve()
{
    cin >> n >> k;
    reset(visited);
    s = 0;
    kt = 0;

    FORU (i, 0, n)
    {
        cin >> A[i];
        s += A[i];
    }

    if (s % k)
    {
        cout << "0\n";
        return;
    }

    s /= k;
    Try (0, 0);

    cout << kt << "\n";

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