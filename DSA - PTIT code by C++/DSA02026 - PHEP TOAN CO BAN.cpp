/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02026 - PHEP TOAN CO BAN
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
#define tree node *
ll MOD = 1e9 + 7;

string ans;
int kt;

int ktra(string s)
{
    int a = (s[0] - '0') * 10 + (s[1] - '0'), b = (s[5] - '0') * 10 + (s[6] - '0');
    int sum = 0;
    if (s[3] == '+')
        sum = a + b;
    else
        sum = a - b;
    if (sum == (s[10] - '0') * 10 + (s[11] - '0'))
        return 1;
    return 0;
}

void Try(int i, string s)
{
    if (kt)
        return;

    if (i == s.size())
    {
        if (ktra(s))
        {
            ans = s;
            kt = 1;
        }
        return;
    }

    if (s[i] == '?')
    {
        if (i == 3)
        {
            s[i] = '+';
            Try(i + 1, s);
            s[i] = '-';
            Try(i + 1, s);
        }
        else if (i == 0 || i == 5 || i == 10)
        {
            for (char j = '1'; j <= '9'; j++)
            {
                s[i] = j;
                Try(i + 1, s);
            }
        }
        else if (i == 1 || i == 6 || i == 11)
        {
            for (char j = '0'; j <= '9'; j++)
            {
                s[i] = j;
                Try(i + 1, s);
            }
        }
    }
    else
        Try(i + 1, s);
}
void solve()
{
    string s;
    getline(cin, s);

    if (s[3] == '/' || s[3] == '*')
    {
        cout << "WRONG PROBLEM!\n";
        return;
    }

    kt = 0;
    ans = "";
    Try(0, s);

    if (ans.size())
        cout << ans << "\n";
    else
        cout << "WRONG PROBLEM!\n";
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solve();
    }
}
