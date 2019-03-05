/*#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int nextt[MAXN + 5];
int kmp(string s1, string s2)
{
	int ans = 0;
	int i = 0, j = 0;
	while (i < s1.size())
	{
		while (-1 != j && s1[i] != s2[j]) j = nextt[j];
		i++, j++;
		if (j >= s2.size())
		{
			ans++;
			j = 0;//²»¼ÆËãÖØ¸´
		}
	}
	return ans;
}

int main()
{
	int	n, k;
	nextt[0] = -1;
	while (cin >> n >> k)
	{

		string s;
		cin >> s;
		int ans = 0;
		for (int i = 0; i < 26; i++)
		{
			string ss(k, 'a' + i);
			ans = max(ans, kmp(s, ss));
		}
		cout << ans << endl;
	}
}*/