/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA05039 - TONG CHU SO
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
#define tree node*
ll MOD = 1e9 + 7;

int A, B;

int cmp(string s1, string s2)
{
	if(s1.size() != s2.size()) return s1.size() < s2.size();
	return s1 < s2;
}

string change(string s, int k)
{
	string res = ((s == "0") ? "" : s) + to_string(k);
	sort(all(res));
	return res;
}

void solve()
{
    cin >> A >> B;
    string INF(100, '9');
    vector <vector <string> > dp(A + 1, vector< string>(B + 1, INF));
    dp[0][0] = "0";

    FORU (i, 1, A+1)
    {
        FORU (j, 1, B+1)
        {
            for(int k = 1; k <= sqrt(min (i * i, min(j, 81))); k++)
            {
                if(dp[i - k][j - k * k] != INF)
                {
                    string tmp = change(dp[i - k][j - k * k], k);
                    if(cmp(tmp, dp[i][j])) dp[i][j] = tmp;
                }
            }
        }
    }

    if(dp[A][B] == INF) cout << -1;
    else cout << dp[A][B];
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
