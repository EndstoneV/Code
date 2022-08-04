#include<bits/stdc++.h>
#define v int
using namespace std;
v a[100][100],ans[100][100],n,x=1,y=1,inp;
v main(){
	scanf("%d",&n);
	for(v i=1;i<=n*n;i++){
		a[x][y]=i;
		v tou1=x+ans[inp][0],tou2=y+ans[inp][1];
		if(tou1<1 || tou1>n || tou2<1 || tou2>n || a[tou1][tou2])
			inp=(inp+1)%4;
			//huan hang
		x+=ans[inp][0],y+=ans[inp][1];
	}
	for(v i=1;i<=n;i++){
		for(v j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		if(i<n) printf("\n");
	}
	return 0;
}
