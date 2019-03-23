/*
题意
有n个房间，编号1~n,每个房间有ai个物品。有三种操作，从一个房间拿1个物品到相邻的一个房间；
拿走某个房间里的1个物品；将身上的物品放回到某个房间。每分钟只能进行一次上述操作。现在有
一个检查系统，会检查相邻的两个房间的物品数量和，得到n-1个和。如果与上一分钟检查结果不同
就会触发警报。问你在k分钟之内最多能拿走多少个物品而不触发警报

输入
第一行三个数，表示n,m,k
第二行n个数,a1,a2...an表示每个房间物品数量
输出
能拿走的物品的最大数量
样例
输入
2
3 2 2
4 1 3
5 10 10
7 0 7 0 7
输出
2
7
数据规模
1<=n<=1e4
1<=m,k<=1e9
时间 1000ms
内存 64MB

*/

#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int MAXN = 1e5;
ll a[MAXN + 5];
int main()
{
	ll n, m, k;
	while (cin >> n >> m >> k)
	{
		ll  minv=1000000000000;
		for (int i = 0; i < n; i++) 
		{ 
			cin >> a[i]; 
			if (i%2==0) minv = min(minv, a[i]); 
		}
		if (n == 1) cout << min(k*m, a[0]) << endl;
		else if (n%2 == 0) cout << 0 << endl;
		else
		{
			int num = n / 2 + 1;
			if (m < num) cout << 0 << endl;
			else cout << min(m / num * k, minv) << endl;
		}
	}
}