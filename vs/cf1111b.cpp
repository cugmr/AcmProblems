/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1E5;
ll a[MAXN + 5];
int main()
{
	ll n, k, m;
	while (cin >> n >> k >> m)
	{
		for (int i = 0; i < n; i++)cin >> a[i];
		sort(a, a + n, greater<ll>());
		ll sum = 0;
		double ans = 0;
		for (int i = 0; i < n; i++)
		{
			ll newsum = sum + a[i];
			double ans1 = 0;
			if (m - (n - i - 1) >= 0)
			{
				ans1 = (newsum + min(k * (i+1), m - n + (i+1))) / (i + 1.0);
			}
			if (ans1 > ans) ans = ans1;
			sum = newsum;
		}
		printf("%.10lf\n", ans);
	}
}*/