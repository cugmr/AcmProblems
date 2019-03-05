/*#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2E5;
typedef long long ll;
ll dp[MAXN + 5][3];
const int mod = 1e9 + 7;

int main()
{
	ll n, l, r;
	while (cin >> n >> l >> r)
	{
		ll a0 = (r - l + 1) / 3;
		ll a1 = a0, a2 = a0;
		if ((r - l + 1) % 3 == 1)
		{
			if (l % 3 == 0)a0++;
			else if (l % 3 == 1)a1++;
			else a2++;
		}
		else if ((r - l + 1) % 3 == 2)
		{
			if (l % 3 == 0)a0++,a1++;
			else if (l % 3 == 1)a1++,a2++;
			else a2++, a0++;
		}
		dp[1][0] = a0;
		dp[1][1] = a1;
		dp[1][2] = a2;
		for (int i = 2; i <= n; i++)
		{
			dp[i][0] = (dp[i - 1][0] * a0%mod + dp[i - 1][1] * a2%mod + dp[i - 1][2] * a1%mod) % mod;
			dp[i][1] = (dp[i - 1][0] * a1%mod + dp[i - 1][1] * a0%mod + dp[i - 1][2] * a2%mod) % mod;
			dp[i][2] = (dp[i - 1][0] * a2%mod + dp[i - 1][1] * a1%mod + dp[i - 1][2] * a0%mod) % mod;
		}
		cout << dp[n][0] << endl;
	}
	return 0;
}*/