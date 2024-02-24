/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07030 - HINH CHU NHAT 0 - 1
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
 
int process(vi doc)
{
    stack<int> st;
    int ans = 0;
    FORU (i, 0, doc.size())
	{
        while(!st.empty() && doc[i] < doc[st.top()])
		{
            int dai = doc[st.top()];
            st.pop();
			int rong;
			if(st.empty()) rong = i;
			else rong = i - st.top()-1;
            ans = max(ans, dai* rong);
        }
        st.push(i);
    }
    return ans;
}

void solve()
{
    int n, m;
	cin >> n >> m;
    vector <vi> val(n, vi(m));
    for (auto &i : val)
        for (int &j: i) cin >> j;
 
    vi doc(m, 0);
    int ans = 0;
    
    FORU (i, 0, n)
	{
        FORU (j, 0, m)
		{
            if(val[i][j] == 0) doc[j] = 0;
            else doc[j]++;
        }
        ans = max(ans, process(doc));
    }
    cout << ans << "\n";
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
