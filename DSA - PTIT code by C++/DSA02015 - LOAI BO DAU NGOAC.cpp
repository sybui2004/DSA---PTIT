/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA02015 - LOAI BO DAU NGOAC
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

ll mod = 1e9 + 7;

set <string> se;

int ktra(string s)
{
    if (s == "") return 0;
	int open = 0, close = 0;

	for (char i: s)
    {
		if (i == '(')
        {
            open++;
		}
		if (i == ')') close++;
		if (close > open) return 0;
	}

	if (open == 0 && close == 0 && s.size() == 1) return 0;
	return (open == close);
}

void solve()
{
    se.clear();
    string s;
    cin >> s;
    if (s == "")
    {
        cout << "-1\n";
        return;
    }

    unordered_map <string, int> mp;
	queue <string> q;
	mp[s] = 1;
	q.push(s);
	int kt = 0;
	while (!q.empty())
    {
		string front = q.front();
		q.pop();

		if (ktra(front))
        {
			se.insert(front);
			kt = 1;
		}

        if (kt) continue;
        
		FORU (i, 0, front.size())
        {
			if (front[i] == '(' || front[i] == ')')
            {
				string cur = front.substr(0, i) + front.substr(i + 1, front.size());
				if (!mp[cur])
                {
					mp[cur] = 1;
					q.push(cur);
				}
			}

		}

	}

    if (se.empty())
    {
        cout << "-1\n";
        return;
    }

    for (auto s : se) cout << s << " ";
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