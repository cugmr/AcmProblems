/*#include <bits/stdc++.h>
using namespace std;
const int MAXN = 150005;
int fa[MAXN + 5], r[MAXN + 5], g[MAXN + 5];
int find(int x) { return fa[x] == x ? x : fa[x] = find(fa[x]); }
int main()
{
	int n;
	while (cin >> n)
	{
		memset(r, 0, sizeof(r));
		for (int i = 1; i <= n; i++) fa[i] = g[i] = i;
		for (int i = 0; i < n - 1; i++)
		{
			int x, y;
			cin >> x >> y;
			int fx = find(x), fy = find(y);
			r[g[fx]] = fy;
			g[fx] = g[fy];
			fa[fy] = fx;
		}
		for (int i = find(1); i; i = r[i])
			cout << i << " ";
		cout << endl;

	}
}*/