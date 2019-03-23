/*#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1E5;
int dp[MAXN], brother[MAXN + 5], a[MAXN + 5];
int main()
{
	int t, m;
	while (cin >> t >> m)
	{
		for (int i = 1; i <= m; i++) cin >> brother[i] >> a[i];
		for (int i = 1; i <= m; i++)
		{
			for (int j = brother[i]; j <= t; j++)
			{
				dp[j] = max(dp[j - brother[i]] + a[i], dp[j]);
			}
		}
		int ans = dp[0];
		for (int i = 0; i <= t; i++)
			ans = max(ans, dp[i]);
		cout << ans << endl;
	}
	return 0;
}*/