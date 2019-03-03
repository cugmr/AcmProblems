/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		for (int i = 0; i < a.size(); i++) if (a[i] == '*') a[i] = '1'; else a[i] = '0';
		for (int i = 0; i < b.size(); i++)if (b[i] == '*') b[i] = '1'; else b[i] = '0';
		bitset<1000> aa(a), bb(b);
		aa ^= bb;
		int ans = 0;
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (aa[i] == 1) 
			{ 
				aa[i] = ~aa[i]; 
				aa[i + 1] = ~aa[i + 1];
				ans++; 
			}
		}
		cout << ans << endl;
	}
}*/