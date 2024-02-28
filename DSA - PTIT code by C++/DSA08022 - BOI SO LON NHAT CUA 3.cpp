/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08022 - BOI SO LON NHAT CUA 3
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

int n;
vi v0, v1, v2;

void display()
{
    if (!v1.empty())
    {
        FORU(i, 0, v1.size())
        v0.push_back(v1[i]);
    }

    if (!v2.empty())
    {
        FORU(i, 0, v2.size())
        v0.push_back(v2[i]);
    }

    sort(all(v0), greater<int>());

    if (!v0.empty() && v0[0] != 0)
    {
        FORU(i, 0, v0.size())
        cout << v0[i];
    }
    else
        cout << -1;
    cout << "\n";

    return;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    v0.clear();
    v1.clear();
    v2.clear();
    int s = 0;
    for (int &i : a)
    {
        cin >> i;
        s += i;
        if (i % 3 == 0)
            v0.push_back(i);
        else if (i % 3 == 1)
            v1.push_back(i);
        else
            v2.push_back(i);
    }

    sort(all(v1), greater<int>());
    sort(all(v2), greater<int>());

    if (s % 3 == 1)
    {
        int k1 = v1.size();
        if (k1 > 0)
            v1.pop_back();
        else
        {
            int k2 = v2.size();
            if (k2 >= 2)
                v2.pop_back(), v2.pop_back();
            else
            {
                cout << "-1\n";
                return;
            }
        }

        display();
    }
    else if (s % 3 == 2)
    {
        int k2 = v2.size();
        if (k2 > 0)
            v2.pop_back();
        else
        {
            int k1 = v1.size();
            if (k1 >= 2)
                v1.pop_back(), v1.pop_back();
            else
            {
                cout << "-1\n";
                return;
            }
        }
        display();
    }
    else
    {
        display();
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
