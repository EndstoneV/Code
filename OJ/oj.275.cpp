#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int derta=b*b-4*a*c;
	double ans;
	if(derta<0) printf("No Answer!");
	else if(derta==0){
		ans=b/(2*a)*-1;
		printf("%.4lf",ans); 
	}
	else{
		ans=-1*b-sqrt(derta);
		ans/=2*a;
		printf("%.4lf\n",ans);
		ans=-1*b+sqrt(derta);
		ans/=2*a;
		printf("%.4lf",ans);
	}
	return 0;
}
