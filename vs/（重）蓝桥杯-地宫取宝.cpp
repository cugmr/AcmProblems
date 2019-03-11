/*
dp[i][j][k][p] 在(i, j)处，拿了k个物品，当前最大值为p的情况有多少种
#include<iostream>
#include<cstdio>
#include<cstring>
const int MAXN = 60;
const int MOD = 1E9 + 7;
using namespace std;
typedef long long ll;
ll r[MAXN][MAXN][15][15];//保存状态 
ll mp[MAXN][MAXN];//初始地图 
ll m, n, num;

ll dfs(ll x, ll y, ll k, ll maxmum)
{
	ll s = 0, t = 0;
	//以前有直接返回
	if (r[x][y][k][maxmum + 1] != -1) return r[x][y][k][maxmum + 1];
	//走到出口了
	if (x == m && y == n)
	{
		//刚好拿了k个
		if (k == num) return r[x][y][k][maxmum + 1] = 1;
		//拿了k-1个，且可以拿最后一个
		else if (k == num - 1 && maxmum < mp[x][y])
			return r[m][n][k][maxmum + 1] = 1;
		else return r[x][y][k][maxmum + 1] = 0;
	}
	//没有到出口
	else
	{
		//当前可以拿
		if (mp[x][y] > maxmum)
		{
			if (x + 1 <= m) s = (s + dfs(x + 1, y, k + 1, mp[x][y]) + dfs(x + 1, y, k, maxmum)) % MOD;
			if (y + 1 <= n) s = (s + dfs(x, y + 1, k + 1, mp[x][y]) + dfs(x, y + 1, k, maxmum)) % MOD;
		}
		//当前不能拿
		else
		{
			if (x + 1 <= m) s = (s + dfs(x + 1, y, k, maxmum)) % MOD;
			if (y + 1 <= n) s = (s + dfs(x, y + 1, k, maxmum)) % MOD;
		}
		return r[x][y][k][maxmum + 1] = s;
	}
}

int main()
{
	memset(r, -1, sizeof(r));
	long long i, j, p, q;
	cin >> m >> n >> num;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> mp[i][j];
	dfs(1, 1, 0, -1);
	cout << r[1][1][0][0] << endl;
	return 0;
}
*/