/*#include<bits/stdc++.h>
using namespace std;
void move(int &x, int &y, int dir)
{
	if (dir == 0) x--;
	else if (dir == 1)y++;
	else if (dir == 2) x++;
	else y--;
}
int mp[105][105];
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)cin >> mp[i][j];
		int nx, ny, k, dir;
		char curDir;
		cin >> nx >> ny >> curDir >> k;
		if (curDir == 'U') dir = 0; else if (curDir == 'R') dir = 1;
		else if (curDir == 'D') dir = 2; else dir = 3;
		for (int i = 0; i < k; i++)
		{
			if (mp[nx][ny])
			{
				dir = (dir + 1) % 4;
				mp[nx][ny] = (mp[nx][ny] + 1) % 2;
				move(nx, ny, dir);
			}
			else
			{
				dir = (dir + 3) % 4;
				mp[nx][ny] = (mp[nx][ny] + 1) % 2;
				move(nx, ny, dir);
			}
		}
		cout << nx << " " << ny << endl;
	}
}*/