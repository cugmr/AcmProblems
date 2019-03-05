/*#include <bits/stdc++.h>
using namespace std;
int a[55];
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int left = 0, right = 0;
		if (a[0] < 0)
		{
			for (int i = 0; i < n; i++)
				if (abs(a[i]) < abs(a[0]) && a[i] > 0) left++;
			if (left == 0) { cout << 1 << endl; }
			else
			{
				for (int i = 0; i < n; i++)
					if (a[i] < 0 && abs(a[i]) > abs(a[0])) right++;
				cout << left + right + 1 << endl;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
				if (abs(a[i]) > abs(a[0]) && a[i] < 0) right++;
			if (right == 0) { cout << 1 << endl; }
			else
			{
				for (int i = 0; i < n; i++)
					if (a[i] > 0 && abs(a[i]) < abs(a[0])) left++;
				cout << left + right + 1 << endl;
			}
		}
	}
}*/