/*#include <bits/stdc++.h>
using namespace std;
int s[10];
char mp[1005][1005];
int vis[1005][1005];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int ans[100];
struct point 
{
	int x, y; 
	int status;
	point() {}
	point(int _x, int _y, int _s) :x(_x), y(_y), status(_s) {}
};

int main()
{
	int n, m, p;
	while (cin >> n >> m >> p)
	{
		queue<point> que[20];
		memset(vis, 0, sizeof(vis));
		memset(ans, 0, sizeof(ans));
		for (int i = 1; i <= 9; i++) while (!que[i].empty()) que[i].pop();
		int num = 0;
		for (int i = 1; i <= p; i++)cin >> s[i];
		for (int i = 0; i < n; i++)cin >> mp[i];
		for (int i = 0; i < n; i++)for (int j = 0; j < m; j++) 
			if (mp[i][j] >= '1'&&mp[i][j] <= '9') { vis[i][j] = 1; que[mp[i][j] - '0'].push(point(i, j, 1)); }
		for (int i = 1; i <= 10; i++) if (!que[i].empty()) num++;
		while (1)
		{
			int change = 0;
			for (int i = 1; i <= num; i++)
			{
				if (que[i].empty()) continue;
				int last = -1;
				int number = s[i];
				while (!que[i].empty() && number >= 0)
				{ 
					point now = que[i].front();
					if (now.status != last) { last = now.status; number--; }
					if (number < 0) break;
					que[i].pop();
					for (int j = 0; j < 4; j++)
					{
						int nx = dx[j] + now.x, ny = dy[j] + now.y;
						if (nx >= 0 && nx < n&&ny >= 0 && ny < m && !vis[nx][ny] && mp[nx][ny] != '#')
						{
							vis[nx][ny] = 1;
							mp[nx][ny] = '0' + i;
							que[i].push(point(nx, ny, now.status + 1));
							change = 1;
						}
					}
				}
			}
			if (!change) break;
		}
		for (int i = 0; i < n; i++)for (int j = 0; j < m; j++) if (mp[i][j] >= '0'&&mp[i][j] <= '9') ans[mp[i][j] - '0']++;
		for (int i = 1; i <= num; i++) cout << ans[i] << " ";
		cout << endl;

	}
	return 0;
}*/