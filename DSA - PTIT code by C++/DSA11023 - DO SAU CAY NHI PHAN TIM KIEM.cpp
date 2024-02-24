/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11023 - DO SAU CAY NHI PHAN TIM KIEM
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

void buildTree(tree &T, int data)
{
    if(!T) T = createNode(data);
    else if (T -> data > data) buildTree(T -> left, data);
    else if (T -> data <= data) buildTree(T -> right, data);
}

int ans;

void order(tree T, int deep) {
	if (T->left) order(T->left, deep + 1);
	if (T->right) order(T->right, deep + 1);
    if (!T->left && !T->right) ans = max(ans, deep);
}

void solve()
{
	int n;
    cin >> n;
    tree T = NULL;

    while(n--)
    {
        int x;
        cin >> x;
        buildTree(T, x);
    }

    ans = 0;
    order(T, 0);
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