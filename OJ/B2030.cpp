#include<bits/stdc++.h>
using namespace std;
double dis(double a,double b,double c,double d){
	double ans;
	ans=sqrt(pow((b-a),2)+pow((d-c),2));
	return ans;
}
int main(){
	double x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	printf("%.3lf",dis(x1,x2,y1,y2));
	return 0;
}
