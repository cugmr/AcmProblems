#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 500;
ll a[MAXN + 5][MAXN + 5];
ll row[MAXN + 5], cul[MAXN + 5];
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		memset(row, 0, sizeof(row));
		memset(row, 0, sizeof(cul));
		for (int i = 1; i <= m; i++) for (int j = 1; j <= n; j++)cin >> a[i][j];
		for (int i = 1; i <= m; i++) { for (int j = 1; j <= n; j++) { row[i] = row[i - 1] + a[i][j]; } }
	}
	return 0;
}