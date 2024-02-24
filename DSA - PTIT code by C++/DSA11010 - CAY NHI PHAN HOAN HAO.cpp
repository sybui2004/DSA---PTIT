/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11010 - CAY NHI PHAN HOAN HAO
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

int u, v;
char x;

struct node {
	int data;
	node *left, *right;
};

tree createNode(int data)
{
    tree newNode = new node;
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

void buildTree(tree &T)
{
    if (T) 
    {
        if(T -> data == u)
        {
            if(x == 'L') T -> left = createNode(v);
            else T -> right = createNode(v);
        }
        buildTree(T -> left);
        buildTree(T -> right);
    }
}

set <int> s;
int kt;
void order(tree T, int lv)
{
    if (T->left && !T->right || T->right && !T->left) kt = 0;  
	else if (T->left == NULL && T->right == NULL) s.insert(lv);
	else
    {
		if (T->left != NULL) order(T->left, lv + 1);
		if (T->right != NULL) order(T->right, lv + 1);
	}
}

void solve()
{
	int n;
    cin >> n;
    cin >> u >> v >> x;
    n--;
    s.clear();
    kt = 1;
    tree T = createNode(u);
    buildTree(T);

    while (n--)
    {
        cin >> u >> v >> x;
        buildTree(T);
    }
    
    order(T, 0);
    if (kt == 0)
    {
        cout << "No\n";
        return;
    }
    if (s.size() == 1) cout << "Yes\n";
    else cout << "No\n";
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