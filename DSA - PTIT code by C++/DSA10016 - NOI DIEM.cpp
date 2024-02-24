/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA10016 - NOI DIEM
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

int visited[105];
vi edge[105];
int n;

double kc(pair <double, double> A, pair<double, double> B)
{
	return sqrt((A.X- B.X) * (A.X - B.X) + (A.Y - B.Y) * (A.Y - B.Y));
}

struct adj {
	int u, v;
	double w;
};

vector <adj> ADJ;

bool cmp(adj a, adj b)
{
	return a.w < b.w;
}

void DFS(int u)
{
	visited[u] = 1;
	for (int v : edge[u])
        if (!visited[v]) DFS(v);
}

void solve()
{
	FORU (i, 1, 105) edge[i].clear();
    ADJ.clear();

    cin >> n;
    vector <pair <double, double> > point(n);

    for (auto &i : point) cin >> i.X >> i.Y;
    
    FORU (i, 1, n + 1)
        FORU (j, 1, n + 1)
            ADJ.push_back({i, j, kc(point[i - 1], point[j - 1])});
    
    sort(all(ADJ), cmp);

    double ans = 0;

    for (adj x : ADJ)
    {
        reset(visited);
        DFS(x.u);

        if (!visited[x.v])
        {
            ans += x.w;
            edge[x.u].push_back(x.v);
            edge[x.v].push_back(x.u);
        }
    }

    cout << setprecision(6) << fixed << ans << "\n";
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