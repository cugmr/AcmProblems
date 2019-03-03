#include <bits/stdc++.h>
using namespace std;
int a[15][15];
bool dfs(int x, int y, int dep, int num, int goal)
{
	if (num == goal)
	{

	}
}
int main()
{
	int n, m;
	while (cin >> m >> n)
	{
		int all = 0;
		for (int i = 0; i < n; i++)for (int j = 0; j < m; j++) { cin >> a[i][j]; all += a[i][j]; }
		int ans = dfs(0, 0, 1, 0, all / 2);
		if (ans)cout << ans << endl;
		else cout << 0 << endl;
	}
	return 0;
}