/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09025 - DUONG DI THEO DFS VOI DO THI CO HUONG
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

vector<vi> edge;
int visited[1005];
int V, e, u, v;

void dfs(int u)
{
    stack<pair<int, vi>> st;
    vi tmp;
    tmp.pb(u);
    st.push({u, tmp});
    visited[u] = 1;
    while (!st.empty())
    {
        int top = st.top().X;
        tmp = st.top().Y;
        st.pop();
        if (top == v)
        {
            for (int i : tmp)
                cout << i << " ";
            cout << "\n";
            return;
        }
        for (int i : edge[top])
        {
            if (!visited[i])
            {
                st.push({top, tmp});
                tmp.pb(i);
                st.push({i, tmp});
                visited[i] = 1;
                break;
            }
        }
    }

    cout << "-1\n";
}

void solve()
{
    cin >> V >> e >> u >> v;
    edge.clear();
    edge.resize(V + 1);
    reset(visited);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge[a].pb(b);
    }

    dfs(u);
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