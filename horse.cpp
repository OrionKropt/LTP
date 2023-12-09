#include <iostream>

using namespace std;


// конь

int direct[8][2] = { {2, 1}, {1, 2}, {-1,2}, {-2, 1},{-2,-1}, {-1,-2}, {1, -2},{2, -1} };
int x[64];
int y[64];
char alph[10] = "zabcdefgh";
int Table[9][9];
int n, k;


struct Point
{
	char x;
	int y;
};

Point* path = new Point[64];
bool OK(int i, int j)
{
	return (i >= 1) && (i <= n) && (j >= 1) && (j <= n) && (!Table[i][j]);
}


void game(int x, int y)
{
	int dx, dy;
	path[k].x = alph[x];
	path[k++].y = y;
	if (k == n * n)
	{
		for (int i = 0; i < k; i++)
		{
			cout << path[i].x << path[i].y << endl;
		}
		exit(0);
	}

	for (int i = 0; i < 8; i++)
	{
		dx = x + direct[i][0];
		dy = y + direct[i][1];
		if (OK(dx, dy))
		{
			Table[dx][dy] = k;
			game(dx, dy);
		}
	}
	Table[x][y] = 0;
	k--;


}

int main()
{
	// 1298 конь
	cin >> n;
	if (n == 1) cout << "a1";
	else if (n > 4)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				Table[i][j] = 0;
			}
		}
		k = 0;
		Table[1][1] = 1;
		game(1, 1);
	}
	else cout << "IMPOSSIBLE";



	return 0;
}


