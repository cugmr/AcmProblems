/*#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int n;
	while (cin >> n)
	{
		a.clear();
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
		int ans = 10000000, id = 10000;
		for (int num = 1; num <= 100; num++)
		{
			int now = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] > num) now += a[i] - num - 1;
				else if (a[i] < num) now += num - a[i] - 1;
			}
			if (ans > now) { ans = now; id = num; }
		}
		cout << id << " " << ans << endl;
	}
	return 0;
}*/