/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11015 - TONG LON NHAT
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
};

tree createNode(int data)
{
    tree newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void buildTree(tree &T)
{
    if (T)
    {
        if (T->data == u)
        {
            if (x == 'L')
                T->left = createNode(v);
            else
                T->right = createNode(v);
        }
        buildTree(T->left);
        buildTree(T->right);
    }
}

int ans;

int order(tree T)
{
    if (!T)
        return 0;
    int L = order(T->left), R = order(T->right);
    if (!T->left && !T->right)
        return T->data;
    if (!T->left)
        return R + T->data;
    if (!T->right)
        return L + T->data;
    ans = max(ans, L + R + T->data);
    return max(L, R) + T->data;
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
    ans = -INT_MAX;
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