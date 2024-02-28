/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09020 - CHUYEN DANH SACH KE SANG MA TRAN KE
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
    int a[n + 1][n + 1] = {};
    string str;
    cin.ignore();
    FORU(i, 1, n + 1)
    {
        getline(cin, str);
        str += " ";

        int res = 0;
        FORU(j, 0, str.size())
        {
            if (str[j] != ' ')
                res = res * 10 + str[j] - '0';
            else
            {
                a[res][i] = a[i][res] = 1;
                res = 0;
            }
        }
    }

    FORU(i, 1, n + 1)
    {
        FORU(j, 1, n + 1)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    fast;
    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }
}