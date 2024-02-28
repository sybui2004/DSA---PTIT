/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05047 - CHON O
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
// status column: 0000, 0001, 0010, 0100, 0101, 1000, 1001, 1010
int dp[10000][16];
void solve()
{
    int n, ans = 0, maxA = INT_MIN;
    cin >> n;

    int A[4][10005];
    reset(dp);

    FORU(i, 0, 4)
    FORU(j, 0, n)
    {
        cin >> A[i][j];
        maxA = max(A[i][j], maxA);
    }

    vi status = {0, 1, 2, 4, 5, 8, 9, 10};
    FORU(i, 0, n)
    {
        for (int j : status)
        {

            int s = 0;
            int tmp = j;

            FORU(k, 0, 4)
            {
                if (tmp % 2)
                    s += A[k][i];
                tmp /= 2;
            }

            if (i == 0)
            {
                dp[i][j] = max(dp[i][j], s);
                continue;
            }

            for (int k : status)
            {

                if ((k & j) == 0)
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][k] + s);
                    ans = max(ans, dp[i][j]);
                }
            }
        }
    }

    if (ans == 0)
        cout << maxA << "\n";
    else
        cout << ans << "\n";
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