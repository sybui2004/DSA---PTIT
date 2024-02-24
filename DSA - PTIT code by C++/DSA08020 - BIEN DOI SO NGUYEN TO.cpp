/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08020 - BIEN DOI SO NGUYEN TO
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

int kt[10000];

void sieve()
{
	for(int i = 1000; i <= 9999; i++)
	{
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				kt[i] = 1;
				break;
			}
		}
	}
}

void solve()
{
    int S, T;
    cin >> S >> T;
    mii m;
    queue <int> q;
    q.push(S);
    m[S] = 1;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        if(x == T)
        {
            cout << m[x] - 1 << "\n";
            return;
        }

        FORU (i, 0, 4)
        {
            string tmp = to_string(x);

            for(char a = '0'; a <= '9'; a++)
            {
                tmp[i] = a;
                int res = stoi(tmp);

                if(!kt[res] && !m[res] &&res >= 1000) 
                {
                    q.push(res);
                    m[res] = m[x] + 1;
                }
            }
        }
    }
}

int main()
{
	fast;
    sieve();
	int t = 1;
	cin >> t;

	while (t--)
	{
		solve();
	}
}
