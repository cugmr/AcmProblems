/*#include <bits/stdc++.h>
using namespace std;
const int MAXN = 15000000;
int prime[MAXN + 5];
int main()
{
	int n;
	for (int i = 2; i <= MAXN; i++)	if (!prime[i])	for (int j = i; j < MAXN / i; j++) prime[i*j] = 1;
	while (cin >> n && n)
	{
		if (prime[n] == 0) cout << "0" << endl;
		else
		{
			int pre, aft;
			for (int i = n; i >= 2; i--) if (prime[i] == 0) { pre = i; break; }
			for (int i = n; i <= MAXN; i++) if (prime[i] == 0) { aft = i; break; }
			cout << aft - pre << endl;
		}
	}
}*/