/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11014 - TONG NODE LA BEN PHAI
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
#define tree node *
ll MOD = 1e9 + 7;

int u, v;
char x;

struct node
{
	int data;
	node *left, *right;
	node(int x)
	{
		this->data = x;
		left = right = NULL;
	}
};

void buildTree(tree &T, int n)
{
	unordered_map<int, tree> m;
	FORU(i, 0, n)
	{
		int u, v;
		char c;
		cin >> u >> v >> c;
		if (!m[u])
		{
			T = new node(u);
			if (c == 'L')
			{
				T->left = new node(v);
				m[v] = T->left;
			}
			else
			{
				T->right = new node(v);
				m[v] = T->right;
			}
			m[u] = T;
		}
		else
		{
			if (c == 'L')
			{
				m[u]->left = new node(v);
				m[v] = m[u]->left;
			}
			else
			{
				m[u]->right = new node(v);
				m[v] = m[u]->right;
			}
		}
	}
}

int ans;

bool isLeaf(tree T)
{
	return (T->left == T->right && T->left == NULL);
}

void order(tree T)
{
	if (!T)
		return;
	if (T->right && isLeaf(T->right))
		ans += T->right->data;
	if (T->right && !isLeaf(T->right))
		order(T->right);
	if (T->left && !isLeaf(T->left))
		order(T->left);
}
void solve()
{
	int n;
	cin >> n;
	tree T = NULL;
	buildTree(T, n);
	ans = 0;
	order(T);
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