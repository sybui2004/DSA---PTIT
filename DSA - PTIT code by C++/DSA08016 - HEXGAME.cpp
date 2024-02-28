/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08016 - HEXGAME
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

string ans = "1238004765", v;
map<string, int> m;

string left1(string l)
{
    char tmp = l[1];
    l[1] = l[0];
    l[0] = l[3];
    l[3] = l[7];
    l[7] = l[8];
    l[8] = l[5];
    l[5] = tmp;
    return l;
}

string right1(string r)
{
    char tmp = r[2];
    r[2] = r[1];
    r[1] = r[4];
    r[4] = r[8];
    r[8] = r[9];
    r[9] = r[6];
    r[6] = tmp;
    return r;
}

string left2(string l)
{
    char tmp = l[1];
    l[1] = l[5];
    l[5] = l[8];
    l[8] = l[7];
    l[7] = l[3];
    l[3] = l[0];
    l[0] = tmp;
    return l;
}

string right2(string r)
{
    char tmp = r[2];
    r[2] = r[6];
    r[6] = r[9];
    r[9] = r[8];
    r[8] = r[4];
    r[4] = r[1];
    r[1] = tmp;
    return r;
}

void Try()
{
    queue<pair<string, int>> q;
    q.push({v, 0});
    pair<string, int> p;
    string s;

    while (1)
    {
        p = q.front();
        q.pop();

        if (p.Y == 13)
            return;

        s = left1(p.X);

        if (!m[s])
        {
            m[s] = p.Y + 1;
            q.push({s, p.Y + 1});
        }

        s = right1(p.X);

        if (!m[s])
        {
            m[s] = p.Y + 1;
            q.push({s, p.Y + 1});
        }
    }
}

int process()
{
    int res = 1e9;
    queue<pair<string, int>> q;
    q.push({ans, 0});
    pair<string, int> front;

    while (1)
    {
        front = q.front();
        q.pop();

        if (m[front.X])
            res = min(res, m[front.X] + front.Y);

        if (front.Y == 13)
            return res;

        q.push({left2(front.X), front.Y + 1});
        q.push({right2(front.X), front.Y + 1});
    }
}

void solve()
{
    char c;
    v = "";
    m.clear();

    FORU(i, 0, 10)
    {
        cin >> c;
        v += c;
    }
    Try();
    cout << process() << "\n";
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