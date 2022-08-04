#include<bits/stdc++.h>
using namespace std;
int main(){
	double a[11],cnt,b[11]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	for(int i=1;i<=10;i++){
		scanf("%lf",&a[i]);
		cnt+=a[i]*b[i];
	} 
	printf("%.1lf",cnt);
} 
