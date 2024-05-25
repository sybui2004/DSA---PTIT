/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA06045 - XAU TOT
*/
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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

// Idea: Lấy tổng số xâu con có độ dài > 1 của s trừ đi số xâu con xấu của s
// Xâu xấu là xâu tạo bởi 1 kí tự A và x kí tự B sau đó hoặc là x kí tự B và 1 kí tự A sau đó, hoặc ngược lại
// Nếu same[i] = 1 || same[i+1] = 1 thì số xâu xấu bằng max (same[i], same[i+1])
// Nếu same[i] != 1 và same[i+1] != 1 thì số xâu xấu là same[i] + same[i+1] - 1
// VD: AAAABBB 
// AAAAB, AAAB, AAB, AB, ABBB, ABB, AB lặp lại 1 xâu AB nên nó là 4 + 3 - 1 = 6

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> same;
    int l = 1;

    // các xâu con liên tiếp giống nhau
    FORU(i, 1, n)
    {
        if (s[i] == s[i - 1])
            l++;
        else
        {
            same.pb(l);
            l = 1;
        }
    }

    same.pb(l);

    ll cur = 0;

    FORU(i, 0, same.size() - 1)
    {
        if (same[i] == 1 || same[i + 1] == 1)
            cur += max(same[i], same[i + 1]);
        else
            cur += same[i] + same[i + 1] - 1;
    }

    cout << 1ll * n * (n - 1) / 2 - cur << "\n";
}

int main()
{
    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}
