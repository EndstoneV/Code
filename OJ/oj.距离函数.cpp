#include<bits/stdc++.h>
using namespace std;
double dis(double a,double b,double c,double d){
	double ans;
	ans=sqrt(pow((b-a),2)+pow((d-c),2));
	return ans;
}
int main(){
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double cnt(0);
	double a=dis(x1,x2,y1,y2);
	double b=dis(x1,x3,y1,y3);
	double c=dis(x2,x3,y2,y3);
	double ans,p;
	cnt=a+b+c;
	p=cnt/2;
	ans=p*(p-a)*(p-b)*(p-c);
	ans=sqrt(ans);
	printf("%.2lf",ans);
}
