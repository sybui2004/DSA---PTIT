/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11006 - DUYET CAY KIEU XOAN OC
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
    stack <tree> st1, st2;
    st1.push(T);

    while(!st1.empty() || !st2.empty())
    {
        while(!st1.empty())
        {
            tree top = st1.top();
            st1.pop();
            cout << top -> data << " ";
            if(top -> right != NULL) st2.push(top -> right);
            if(top -> left != NULL) st2.push(top -> left);
        }
        while(!st2.empty())
        {
            tree top = st2.top();
            st2.pop();
            cout << top -> data << " ";
            if(top -> left != NULL) st1.push(top -> left);
            if(top -> right != NULL) st1.push(top -> right);
        }
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