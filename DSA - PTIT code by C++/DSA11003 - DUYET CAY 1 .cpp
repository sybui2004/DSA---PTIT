/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11003 - DUYET CAY 1
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

int pos;
vi inorder, preorder;
unordered_map<int, int> m;

void process(int l, int r)
{
    if (l <= r)
    {
        int i = m[preorder[pos++]];
        process(l, i - 1);
        process(i + 1, r);
        cout << inorder[i] << " ";
    }
}

void solve()
{
    int n;
    cin >> n;
    inorder.clear();
    preorder.clear();
    inorder.resize(n);
    preorder.resize(n);
    pos = 0;
    m.clear();

    FORU(i, 0, n)
    {
        cin >> inorder[i];
        m[inorder[i]] = i;
    }
    for (int &i : preorder)
        cin >> i;

    process(0, n - 1);
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