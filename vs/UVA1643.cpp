/*#include <bits/stdc++.h>
using namespace std;
const long double pi = acos(-1.0);
long double len[11];
int main()
{
	int n;
	while (cin >> n && n)
	{
		long double xa, xb, ya, yb;
		cin >> xa >> ya >> xb >> yb;
		double sum = 0, sum2 = 0;
		for (int i = 0; i < n; i++) { cin >> len[i]; sum += len[i]; sum2 += len[i] * len[i] * 0.5; }
		long double alpha = atan(ya / xa);
		long double beta = atan(yb / xb);
		long double c = sqrt(2)*sum;
		long double C = fabs(alpha - beta);
		long double B = beta + pi / 4;
		long double b = c / sin(C) * sin(B);
		long double ans = b * c*sin(C + B)*0.5 - sum2;
		printf("%.3lf\n", ans);
	}
	return 0;
}*/