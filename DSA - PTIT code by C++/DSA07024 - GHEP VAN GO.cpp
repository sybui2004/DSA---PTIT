/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07024 - GHEP VAN GO
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
#define mii map<int, int>
#define all(v) v.begin(), v.end()

ll MOD = 1e9 + 7;

int n;

void solve()
{
    
	cin >> n;
	vi v(n), l(n), r(n);

	for (int &i : v) cin >> i;

    if(n == 1)
    {
        cout << "1\n";
        return;
    }

	stack<int> st;
	int ans = 0;

	FORU (i, 0, n)
	{
		while(!st.empty() && v[i] <= v[st.top()]) st.pop();
		if(st.empty()) l[i] = 0;
		else l[i] = st.top()+1;
		st.push(i);
	}
	st = stack<int> {};
	FORD (i, n-1, 0)
    {
		while(!st.empty() && v[i] <= v[st.top()]) st.pop();
		if(st.empty()) r[i] = n-1;
		else r[i] = st.top()-1;
		st.push(i);
	}

    int pos = 0;

	FORU (i, 0, n)
	{
        if (v[i] <= r[i] - l[i] + 1) ans = max(ans, v[i]);
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
