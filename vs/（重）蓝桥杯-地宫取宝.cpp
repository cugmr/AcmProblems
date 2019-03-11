/*
dp[i][j][k][p] ��(i, j)��������k����Ʒ����ǰ���ֵΪp������ж�����
#include<iostream>
#include<cstdio>
#include<cstring>
const int MAXN = 60;
const int MOD = 1E9 + 7;
using namespace std;
typedef long long ll;
ll r[MAXN][MAXN][15][15];//����״̬ 
ll mp[MAXN][MAXN];//��ʼ��ͼ 
ll m, n, num;

ll dfs(ll x, ll y, ll k, ll maxmum)
{
	ll s = 0, t = 0;
	//��ǰ��ֱ�ӷ���
	if (r[x][y][k][maxmum + 1] != -1) return r[x][y][k][maxmum + 1];
	//�ߵ�������
	if (x == m && y == n)
	{
		//�պ�����k��
		if (k == num) return r[x][y][k][maxmum + 1] = 1;
		//����k-1�����ҿ��������һ��
		else if (k == num - 1 && maxmum < mp[x][y])
			return r[m][n][k][maxmum + 1] = 1;
		else return r[x][y][k][maxmum + 1] = 0;
	}
	//û�е�����
	else
	{
		//��ǰ������
		if (mp[x][y] > maxmum)
		{
			if (x + 1 <= m) s = (s + dfs(x + 1, y, k + 1, mp[x][y]) + dfs(x + 1, y, k, maxmum)) % MOD;
			if (y + 1 <= n) s = (s + dfs(x, y + 1, k + 1, mp[x][y]) + dfs(x, y + 1, k, maxmum)) % MOD;
		}
		//��ǰ������
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