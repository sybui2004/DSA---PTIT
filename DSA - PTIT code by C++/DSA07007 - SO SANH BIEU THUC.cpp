/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA07007 - SO SANH BIEU THUC
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

string process(string s)
{
    string cur;
	stack <char> st;
	for (char i : s)
    {
		if (i == ')')
        {
			cur = "";

			while (!st.empty() && st.top() != '(')
            {
				cur = st.top() + cur;
				st.pop();
			}

			st.pop();
			char top;

			if (!st.empty()) top = st.top();
			for (char j : cur)
            {
                if (j == '-' && top == '-') st.push('+');
                else if (j == '+' && top == '-') st.push('-');
                else st.push(j);
			}
		}
		else st.push(i);
	}
	
    cur = "";
	while (!st.empty())
    {
		cur = st.top() + cur;
		st.pop();
	}

	return cur;
}


void solve ()
{
    string a, b;
    cin >> a >> b;
    if (process(a) == process(b)) cout << "YES\n";
    else cout << "NO\n";
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