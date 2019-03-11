/*
1.定义
f(1)=f(2)=1
f(n)=f(n-1)+f(n-2)
2.通项
f(n)=1/sqrt(5)(()^n-()^n)
3.求和
f(1)+f(2)+f(3)...+f(n)=f(n+2)-1
4.性质
4.1 f(1)^2+f(2)^2+f(3)^3..+f(n)^2=f(n)f(n+1)
4.2 f(1)+f(3)+f(5)+...f(2*n-1)=f(2n)
4.3	f(2)+f(4)+f(6)+f(2n)=f(2n+1)-1
4.4.1 f(n)=f(m)f(n-m+1)+f(m-1)f(n-m)
4.4.2 f(n+m)=f(n+1)f(m)+f(n)f(m-1)
4.5 f(n-1)f(n+1)=f(n)^2+(-1)^n	

求 s(n)%f(m)
= (f(n+2)-1)%f(m)
= f(m)f(n-m+3)+f(m-1)f(n-m+2)-1 %f(m)
= f(m-1)f(n-m+2)-1 %f(m)
= 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e5 + 5;
ll fab[MAXN + 5] = { 0,1,1 };
int main()
{
	for (int i = 3; i <= 1000; i++) fab[i] = fab[i - 1] + fab[i - 2];
	for (int i = 1; i <= 1000; i++) { for (int i = 0; i <= 1e7; i++); cout << fab[i] << endl; }
}