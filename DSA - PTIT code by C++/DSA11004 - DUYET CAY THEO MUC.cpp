/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11004 - DUYET CAY THEO MUC
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

void order(tree T)
{
    queue <tree> q;
    q.push(T);

    while(!q.empty())
    {
        tree front = q.front();
        q.pop();
        cout << front -> data << " ";
        if(front -> left) q.push(front -> left);
        if(front -> right) q.push(front -> right);
    }
}

void solve()
{
	int n;
    cin >> n;
    cin >> u >> v >> x;
    n--;
    tree T = createNode(u);
    buildTree(T);

    while (n--)
    {
        cin >> u >> v >> x;
        buildTree(T);
    }
    
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