/*#include<bits/stdc++.h>
using namespace std;
int a[10000005], bias[1000005];
//a      1 2 3 4 5 6 7 8 9 10
//valu   0 1 0 1 0 1 0 1 0 1
//bias   0 1 0 0 0 0 0 0 0
int main()
{
	for (int i = 2; i <= 1000000; i++)
	{
		if (!a[i])
		{
			for (int j = i; j <= 1000000; j++)
			{ 
				a[j - bias[j]] = 1;
			}
			bias[i] = bias[i] + 1;
		}
	}
	int n, m;
	while (cin >> n >> m)
	{
		for (int i = 1; i <= 100; i++) if (!a[i])cout << i << " ";
	}
	return 0;
}*/