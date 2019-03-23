/*
����
��n�����䣬���1~n,ÿ��������ai����Ʒ�������ֲ�������һ��������1����Ʒ�����ڵ�һ�����䣻
����ĳ���������1����Ʒ�������ϵ���Ʒ�Żص�ĳ�����䡣ÿ����ֻ�ܽ���һ������������������
һ�����ϵͳ���������ڵ������������Ʒ�����ͣ��õ�n-1���͡��������һ���Ӽ������ͬ
�ͻᴥ��������������k����֮����������߶��ٸ���Ʒ������������

����
��һ������������ʾn,m,k
�ڶ���n����,a1,a2...an��ʾÿ��������Ʒ����
���
�����ߵ���Ʒ���������
����
����
2
3 2 2
4 1 3
5 10 10
7 0 7 0 7
���
2
7
���ݹ�ģ
1<=n<=1e4
1<=m,k<=1e9
ʱ�� 1000ms
�ڴ� 64MB

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