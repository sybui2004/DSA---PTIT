/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07029 - GIAI MA XAU KY TU
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

string change(string s, int dem)
{
    string res = "";
    FORU (i, 0, dem) res += s;
    return res;
}

void solve()
{
    string s;
    cin >> s;
    stack <char> st;

    for (char i : s)
    {
        if (i != ']')
        {
            st.push(i);
            continue;
        }

		string cnt = "", tmp = "";

		while (!st.empty() && st.top() != '[')
		{
			tmp = st.top() + tmp;
			st.pop();
		}

		st.pop();

		while (!st.empty() && isdigit(st.top()))
		{
			cnt = st.top() + cnt;
			st.pop();
		}
		
		int dem = 1;
		if(!cnt.empty()) dem = stoi(cnt);
		tmp = change(tmp, dem);

		for (char j : tmp) st.push(j);
    }

    string res = "";

    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }

    cout << res << "\n";
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
