#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	double a1,a2,a3,b1,b2,b3;
	scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&a2,&b2,&a3,&b3);
	double r1,r2,r3;
	r1=ceil(n/a1)*b1;
	r2=ceil(n/a2)*b2;
	r3=ceil(n/a3)*b3;
	double rst=min(r1,r2);
	rst=min(rst,r3);
	printf("%.0lf",rst);
}
