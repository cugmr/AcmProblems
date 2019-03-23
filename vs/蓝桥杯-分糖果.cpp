/*#include<bits/stdc++.h>
using namespace std;
int num[205][2];
int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0, maxn = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> num[i][0];
			sum += num[i][0];
		}
		for (int i = 0; i < 10000; i++)
		{
			for (int i = 0; i < n; i++)
				num[i][1] = num[i][0] / 2;
			for (int i = 0; i < n - 1; i++)
				num[i][0] = num[i][1] + num[i + 1][1];
			num[n - 1][0] = num[n - 1][1] + num[0][1];
			for (int i = 0; i < n; i++) if (num[i][0] % 2) num[i][0]++;
		}
		for (int i = 0; i < n; i++)
			maxn = max(num[i][0], maxn);
		cout << maxn * n - sum << endl;
	}
}*/