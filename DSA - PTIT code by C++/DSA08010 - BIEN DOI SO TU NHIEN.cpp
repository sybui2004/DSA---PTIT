/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08010 - BIEN DOI SO TU NHIEN
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

int n;

void solve()
{
    cin >> n;
    mii m;
    priority_queue<int, vector<int>, greater<int> > q;
    q.push(n);
    m[n] = 1;
    while(1)
    {
        priority_queue<int, vector<int>, greater<int> > q1;
        while(!q.empty())
        {
            int x = q.top();
            q.pop();
            if(x==1)
            {
                cout << m[x] - 1 << "\n";
                return;
            }
            int val1 = x-1;
            if(!m[val1])
            {
                m[val1] = m[x] + 1;
                q1.push(val1);
            }
            for(int i = 2; i <= sqrt(x); i++)
            {
                if(x%i==0)
                {
                    int res = x/i;
                    if(!m[res])
                    {
                        m[res] = m[x] + 1;
                        q1.push(res);
                    }
                }
            }
        }
        q = q1;
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
