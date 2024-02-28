/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08001 - CAU TRUC DU LIEU HANG DOI 1
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
    deque<int> dq;
    while (n--)
    {
        int x;
        cin >> x;

        if (x == 1)
            cout << dq.size() << "\n";
        else if (x == 2)
        {
            if (dq.empty())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (x == 3)
        {
            int p;
            cin >> p;
            dq.push_back(p);
        }
        else if (x == 4)
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (x == 5)
        {
            if (dq.empty())
                cout << "-1\n";
            else
                cout << dq.front() << "\n";
        }
        else
        {
            if (dq.empty())
                cout << "-1\n";
            else
                cout << dq.back() << "\n";
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