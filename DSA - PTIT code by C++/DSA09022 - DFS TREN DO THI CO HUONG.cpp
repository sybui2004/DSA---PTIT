/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA09022 - DFS TREN DO THI CO HUONG
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

void dfs(int u)
{
    stack<int> st;
    st.push(u);
    visited[u] = 1;
    cout << u << " ";
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        for (int i : edge[top])
        {
            if (!visited[i])
            {
                cout << i << " ";
                st.push(top);
                st.push(i);
                visited[i] = 1;
                break;
            }
        }
    }
    cout << "\n";
}

void solve()
{
    int v, e, u;
    cin >> v >> e >> u;
    reset(visited);
    edge.clear();
    edge.resize(v + 1);

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