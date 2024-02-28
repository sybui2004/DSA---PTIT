/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA01017 - MA GRAY 3
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

string transform(string binary)
{
    string gray = "";
    gray += binary[0];

    FORU(i, 1, binary.size())
    gray += ((binary[i - 1] == binary[i]) ? '0' : '1');

    return gray;
}
void solve()
{
    string s;
    cin >> s;
    cout << transform(s) << "\n";
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