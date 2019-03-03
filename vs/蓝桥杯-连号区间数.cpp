/*#include<bits/stdc++.h>
using namespace std;

int a[50005];
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++) cin >> a[i];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int ma = a[i], mi = a[i];
			for (int j = i; j < n; j++)
			{
				if (ma < a[j]) ma = a[j];
				if (mi > a[j]) mi = a[j];
				if (j - i == ma - mi) count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

*/