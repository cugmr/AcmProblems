/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1E5;
struct node
{
	int from, to;
	int cost;
	node() {}
	node(int u, int v, int co) :from(u), to(v), cost(co) {}
};
vector<node> mp[MAXN + 5];
int ans[MAXN + 5];
int res;
int dfs(int cur, int fa)
{
	if (mp[cur].size() == 1 && cur != 1) return 0;
	vector<int> now;
	for (int i = 0; i < mp[cur].size(); i++)
	{
		if (mp[cur][i].to != fa)
			now.push_back(dfs(mp[cur][i].to, cur) + mp[cur][i].cost);
	}
	sort(now.begin(), now.end());
	if (now.size() >= 2)res = max(res, now.back() + now[now.size() - 2]);
	return now.back();
}
int main()
{
	int n;
	while (cin >> n)
	{
		int u, v, cost;
		memset(ans, 0, sizeof(ans));
		res = 0;
		for (int i = 0; i < MAXN; i++)mp[i].clear();
		for (int i = 0; i < n-1; i++)
		{
			cin >> u >> v >> cost;
			mp[u].push_back(node(u, v, cost));
			mp[v].push_back(node(v, u, cost));
		}
		res = max(res, dfs(1, -1));
		cout << (ll(res + 1)*res / 2) + res * 10 << endl;
	}
}*/