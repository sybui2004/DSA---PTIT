/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08025 - QUAN MA
*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
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
#define mii map <int, int> 
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

int check (string a)
{
    return a[0] >= 'a' && a[0] <= 'h' && a[1] >= '1' && a[1] <= '8';
}

int posX[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int posY[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void solve()
{
	string st, en;
    cin >> st >> en;

    queue <pair <string, int> > q;

    map <string, int> m;

    q.push({st, 0});

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        
        if (front.X == en)
        {
            cout << front.Y << "\n";
            return;
        }

        FORU (i, 0, 8)
        {
            char x = front.X[0], y = front.X[1];
            x += posX[i];
            y += posY[i];
            string res = string(1, x) + string(1, y);

            if (check(res) && !m[res])
            {
                q.push({res, front.Y + 1});
                m[res] = 1; 
            }
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
