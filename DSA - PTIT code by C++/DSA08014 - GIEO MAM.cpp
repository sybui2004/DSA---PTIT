/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08014 - GIEO MAM
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

int A[505][505];
int r, c;
int posX[] = {-1, 0, 0, 1};
int posY[] = {0, -1, 1, 0};

void BFS()
{
    int dd[505][505], cnt = 0;
    reset(dd);
    queue <pi> q;

    FORU (i, 1, r+1)
        FORU (j, 1, c+1)
        {
            if (A[i][j] == 1) cnt++;
            else if (A[i][j] == 2)
            {
                dd[i][j] = 1;
                q.push({i, j});
            }
        }


    if(!cnt)
    {
        cout << "0\n";
        return;
    }

    while(!q.empty())
    {
        pi front = q.front(); q.pop();
    
        FORU (i, 0, 4)
        {
            int x = front.X + posX[i];
            int y = front.Y + posY[i];
            if (x >= 1 && x <= r && y >= 1 && y <= c && A[x][y] == 1)
            {
                A[x][y] = 2;
                cnt--;

                if (!cnt) 
                {
                    cout << dd[front.X][front.Y] << "\n";
                    return;
                }
                
                dd[x][y] = dd[front.X][front.Y] + 1;
                q.push({x, y});
            }
        }
    }

    cout << "-1\n";
}

void solve ()
{
    cin >> r >> c;
    FORU (i, 1, r + 1)
        FORU (j, 1, c+1)
            cin >> A[i][j];
    
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