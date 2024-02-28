/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA11026 - DUYET SAU CAY TIM KIEM CAN BANG
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

vi a;

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

tree buildTree(int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) >> 1;
    tree res = createNode(a[mid]);
    res->left = buildTree(l, mid - 1);
    res->right = buildTree(mid + 1, r);
    return res;
}

void order(tree T)
{
    if (T->left)
        order(T->left);
    if (T->right)
        order(T->right);
    cout << T->data << " ";
}

void solve()
{
    int n;
    cin >> n;
    a.clear();
    a.resize(n);

    for (int &i : a)
        cin >> i;

    sort(all(a));

    tree T = buildTree(0, n - 1);

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