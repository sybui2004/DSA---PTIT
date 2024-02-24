/*Author: Bùi Thái Sỹ B22DCCN702 from ProPTIT with love
DSA08045 - HANG RAO
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

struct fence {
	int Ax, Bx, Ay, By;
};

struct cow {
	int Cx, Cy;
};

const int size = 2001;
int n, m, mx;
vector <fence> F;
vector <cow> C;
int A[size][size]; //-1 có rào, 1 có bò
int visited[size][size];
int gotoX[4] = {-1, 0, 0, 1};
int gotoY[4] = {0, -1, 1, 0};

int check (int x, int y, int n, int m)
{
    return 0 <= x && x < n && 0 <= y && y < m;
}

// kéo dãn đồ thị
void stretchGraph(vector <fence> &fen, vector <cow> &co)
{
    vi curX, curY;
	vector <pi> tmp1, tmp2;
    
    for (auto i : fen)
    {
        curX.pb(i.Ax);
        curX.pb(i.Bx);
        curY.pb(i.Ay);
        curY.pb(i.By);
    }

    for (auto i : co)
    {
        curX.pb(i.Cx);
        curY.pb(i.Cy);
    }

    FORU (i, 0, curX.size())
    {
        tmp1.pb({curX[i], i});
        tmp2.pb({curY[i], i});
    }

    sort (all(tmp1));
    sort (all(tmp2));

    int posX = 2, posY = 2;

	FORU (i, 0, tmp1.size())
    {
		if(i > 0 && tmp1[i].X != tmp1[i - 1].X) posX += 2;
		curX[tmp1[i].Y] = posX;

        if(i > 0 && tmp2[i].X != tmp2[i - 1].X) posY += 2;
		curY[tmp2[i].Y] = posY;
	}

    mx = max (posX + 2, posY + 2);

    for (int i = 0; i < 2*n; i += 2)
    {
        fen[i/2].Ax = curX[i];
        fen[i/2].Bx = curX[i+1];
        fen[i/2].Ay = curY[i];
        fen[i/2].By = curY[i+1];
    }

    FORU (i, 2*n, 2*n + m)
    {
        co[i - 2*n].Cx = curX[i];
        co[i - 2*n].Cy = curY[i];
    }
}

int BFS (int x, int y)
{
    queue <pi> q;
	q.push({x, y});
	int cnt = 0;
	visited[x][y] = 1;

	while(!q.empty())
    {
		pi front = q.front(); q.pop();
		int x1 = front.X;
		int y1 = front.Y;
		if(A[x1][y1] == 1) cnt++;

		FORU (i, 0, 4)
        {
			int newX = x1 + gotoX[i];
			int newY = y1 + gotoY[i];
			if(check(newX, newY, mx, mx) && !visited[newX][newY] && A[newX][newY] != -1)
            {
				visited[newX][newY] = 1;
				q.push({newX, newY});
			}	
		}
	}

	return cnt;
}

void solve()
{
    reset(visited);
    reset(A);
    F.clear();
    C.clear();
    mx = 0;
	cin >> n >> m;
    F.resize(n);
    C.resize(m);

    FORU (i, 0, n)
        cin >> F[i].Ax >> F[i].Ay >> F[i].Bx >> F[i].By;
    
    FORU(i, 0, m)
        cin >> C[i].Cx >> C[i].Cy;

    stretchGraph (F, C);

    FORU (i, 0, n)
    {
        if (F[i].Ax == F[i].Bx)
        {
            if (F[i].Ay > F[i].By) swap(F[i].Ay, F[i].By);
            FORU (j, F[i].Ay, F[i].By + 1) A[F[i].Ax][j] = -1;
        }
        else
        {
            if (F[i].Ax > F[i].Bx) swap(F[i].Ax, F[i].Bx);
            FORU (j, F[i].Ax, F[i].Bx + 1) A[j][F[i].Ay] = -1;
        }
    }

    FORU(i, 0, m) 
        A[C[i].Cx][C[i].Cy] = 1;

    int ans = 0;

    FORU(i, 0, m)
    {
        if (!visited[C[i].Cx][C[i].Cy]) ans = max (ans, BFS(C[i].Cx, C[i].Cy));
    }

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
