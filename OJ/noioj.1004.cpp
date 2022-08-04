#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main()
{
	ld n,m,a;
	scanf("%lf%lf%lf",&n,&m,&a);
	ld x1,x2;
	x1=floor(n/a*1.0);
	x2=floor(m/a*1.0);
	printf("%.0lf",x1*x2);
	return 0;
 } 
