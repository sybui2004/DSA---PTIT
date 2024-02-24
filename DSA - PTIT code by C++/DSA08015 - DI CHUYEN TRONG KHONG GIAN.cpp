/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08015 - DI CHUYEN TRONG KHONG GIAN
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

struct sqr{
    int x, y, z;
};

sqr S, E;
int A, B, C;
int dp[35][35][35];
char a[35][35][35];
int gotoX[] = {1, -1, 0, 0, 0, 0};
int gotoY[] = {0, 0, 1, -1, 0, 0};
int gotoZ[] = {0, 0, 0, 0, 1, -1};

int check(int i, int j, int k)
{
    return (i >= 0 && i < A && j >= 0 && j < B && k >= 0 && k < C && !dp[i][j][k] && a[i][j][k] != '#' );
}

void BFS()
{
    reset(dp);
    queue <sqr> q;
    q.push(S);
    dp[S.x][S.y][S.z] = 1;

    while(!q.empty())
    {
        sqr front = q.front(); q.pop();
        FORU (i, 0, 6)
        {
            int newX = front.x + gotoX[i], newY = front.y + gotoY[i], newZ = front.z + gotoZ[i];

            if(check(newX, newY, newZ))
            {
                if(newX == E.x && newY == E.y && newZ == E.z)
                {
                    cout << dp[front.x][front.y][front.z] << "\n";
                    return;
                }

                dp[newX][newY][newZ] = dp[front.x][front.y][front.z] + 1;
                
                q.push({newX, newY, newZ});
            }
        }
    }
    
    cout << "-1\n";
}

void solve ()
{
    cin >> A >> B >> C;

    FORU (i, 0, A)
        FORU (j, 0, B)
            FORU (k, 0, C)
            {
                cin >> a[i][j][k];
                if(a[i][j][k] == 'S') S = {i, j, k};
                else if(a[i][j][k] == 'E') E = {i, j, k};
            }

    BFS();
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