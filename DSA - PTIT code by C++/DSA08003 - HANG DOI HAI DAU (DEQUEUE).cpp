/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08003 - HANG DOI HAI DAU (DEQUEUE)
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
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "POPFRONT")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "POPBACK")
        {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "PRINTFRONT")
        {
            if (dq.empty())
                cout << "NONE\n";
            else
                cout << dq.front() << "\n";
        }
        else
        {
            if (dq.empty())
                cout << "NONE\n";
            else
                cout << dq.back() << "\n";
        }
    }
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