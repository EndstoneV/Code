#include<bits/stdc++.h>
int main(){
	int n,sum(0),tp;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&tp);
		sum+=tp;
	}
	printf("%d ",sum);
	double avan=(double)sum/(double)n;
	printf("%.5lf",avan);
	return 0;
}
