/*#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[15][15], vis[15][15], flag;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
void dfs(int x, int y, int dep, int num, int goal)
{
	if (num == goal) { flag = 1; ans = min(ans, dep); return; }
	if (num > goal) {return; }
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < n&&ny >= 0 && ny < m && !vis[nx][ny] && num + a[nx][ny] <= goal)
		{
			vis[nx][ny] = 1;
			dfs(nx, ny, dep + 1, num + a[nx][ny], goal);
			vis[nx][ny] = 0;
		}
	}
}
int main()
{
	while (cin >> m >> n)
	{
		int all = 0;
		for (int i = 0; i < n; i++)for (int j = 0; j < m; j++) { cin >> a[i][j]; all += a[i][j]; }
		ans = 1000;
		flag = 0;
		memset(vis, 0, sizeof(vis));
		vis[0][0] = 1;
		dfs(0, 0, 1, a[0][0], all / 2);
		if (flag==1)cout << ans << endl;
		else cout << 0 << endl;
	}
	return 0;
}*/