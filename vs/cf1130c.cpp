/*#include <bits/stdc++.h>
using namespace std;
int n;
char mp[55][55];
int vis[55][55];
using Pair = pair<int, int>;
typedef vector<Pair> Pvector;
int dirx[4] = { 0,1,0,-1 };
int diry[4] = { 1,0,-1,0 };

void bfs(Pair p, Pvector &vec)
{
	queue<Pair> que;
	que.push(p);
	while (que.size())
	{
		vec.push_back(que.front());
		Pair now = que.front();
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = now.first + dirx[i], ny = now.second + diry[i];
			if (nx >= 0 && nx < n&&ny >= 0 && ny < n && !vis[nx][ny] && mp[nx][ny] != '1')
			{
				vis[nx][ny] = 1;
				que.push(Pair(nx, ny));
			}
		}
	}
}

int distance(const Pair &a, const Pair &b)
{
	return  (a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second);
}

int main()
{
	
	while (cin >> n)
	{
		memset(vis, 0, sizeof(vis));
		Pvector a, b;
		int c1, c2, r1, r2;
		cin >> r1 >> c1 >> r2 >> c2;
		r1--, r2--, c1--, c2--;
		for (int i = 0; i < n; i++) cin >> mp[i];
		bfs(Pair(r1, c1), a);
		bfs(Pair(r2, c2), b);
		int ans = 1000000;
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				ans = min(ans, distance(a[i], b[j]));
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/