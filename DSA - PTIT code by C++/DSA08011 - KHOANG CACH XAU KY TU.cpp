/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08011 - KHOANG CACH XAU KY TU
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
string st, en;
unordered_set<string> se;

void BFS()
{
    queue<pair<string, int>> q;
    q.push({st, 1});

    while (!q.empty())
    {
        auto front = q.front();

        if (front.X == en)
        {
            cout << front.Y << "\n";
            return;
        }

        q.pop();
        string s = front.X;

        for (char &i : s)
        {
            char tmp = i;
            for (char j = 'A'; j <= 'Z'; j++)
            {
                i = j;
                if (se.count(s))
                {
                    se.erase(s);
                    q.push({s, front.Y + 1});
                }
            }
            i = tmp;
        }
    }
}

void solve()
{
    cin >> n >> st >> en;
    se.clear();
    while (n--)
    {
        string i;
        cin >> i;
        se.insert(i);
    }

    BFS();
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