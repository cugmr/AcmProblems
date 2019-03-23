/*#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e4;
int dp[2][MAXN + 5], a[MAXN + 5];
int main()
{
	int v, n;
	while (cin >> v >> n)
	{
		for (int i = 1; i <= n; i++)cin >> a[i];
		int cur = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j <= v; j++) dp[cur][j] = dp[(cur + 1) % 2][j];
			for (int j = a[i]; j <=v; j++)
			{
				dp[cur][j] = max(dp[(cur + 1) % 2][j - a[i]] + a[i], dp[(cur + 1) % 2][j]);
			}
			cur = (cur + 1) % 2;
		}
		cur = (cur + 1) % 2;
		int ans = 0;
		for (int i = 0; i <= v; i++)
			ans = max(ans, dp[cur][i]);
		cout << v-ans << endl;

	}
	return 0;
}*/