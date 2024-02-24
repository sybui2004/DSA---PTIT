/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11005 - DUYET CAY 2
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

vi inorder, levelorder;

void buildTree (tree &T, vi inorder, vi levelorder, int n)
{
    T = createNode(levelorder[0]);
	int k = find(all(inorder), levelorder[0]) - begin(inorder);

	vi l, r;
	FORU (i, 1, n)
		if (find(all(inorder), levelorder[i]) - begin(inorder) < k) l.pb(levelorder[i]);
		else r.pb(levelorder[i]);

	if (k > 0) buildTree (T->left, inorder, l, k);
	if (n - k - 1 > 0)
    {
        vi tmp = inorder;
        int cur = k+1;
        while (cur--) tmp.erase(begin(tmp));
        buildTree (T->right, tmp, r, n - k - 1);
    }
}

void order(tree T)
{
    if(T -> left != NULL) order(T -> left);
    if(T -> right != NULL) order(T -> right);
    cout << T -> data << " ";
}

void solve()
{
	int n;
    cin >> n;
    inorder.clear();
    levelorder.clear();
    inorder.resize(n);
    levelorder.resize(n);
    
    for (int &i : inorder) cin >> i;
    for (int &i : levelorder) cin >> i;

    tree T = NULL;
    buildTree(T, inorder, levelorder, n);
    
    order(T);
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