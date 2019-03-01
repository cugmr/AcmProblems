/*#include<bits/stdc++.h>
using namespace std;
int count, a[20], nn, ans;
int poww(int a, int b)
{
	int res = 1;
	while (b)
	{
		if (b & 1) res = res * a;
		b >>= 1;
		a *= a;
	}
	return res;
}
void print(int *a, int num)
{
	for (int i = 1; i <= num; i++)
	{
		int x = 0, y = 0, z = 0;
		for (int k = i; k > 0; k--) x += poww(10, i - k)* a[k];
		if (x >= nn) break;
		for (int k = i + 1; k <= 8; k++)
		{
			y = z = 0;
			for (int j = i + 1; j <= k; j++) y += poww(10, k - j)* a[j];
			for (int j = k + 1; j <= 9; j++) z += poww(10, 9 - j)* a[j];
			if (y%z == 0 && (y / z + x) == nn) ans++;
		}
	}
}
int main()
{
	while (cin >> nn)
	{
		ans = 0;
		int ax = nn, num = 0;
		while (ax) { num++; ax /= 10; }
		for (int i = 1; i <= 9; i++) a[i] = i;
		do
		{
			print(a, num);
		} while (next_permutation(a + 1, a + 10));
		cout << ans << endl;
	}
	return 0;
}*/