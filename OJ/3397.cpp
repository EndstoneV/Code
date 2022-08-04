#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
struct xy{
	int xa,xb,ya,yb;
};
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	xy a[m+2];
	int b[n+1][n+1];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=m;i++){
		scanf("%d%d%d%d",&a[i].xa,&a[i].ya,&a[i].xb,&a[i].yb);
	}
	for(int i=1;i<=m;i++){
		for(int j=a[i].xa;j<=a[i].xb;j++){
			for(int k=a[i].ya;k<=a[i].yb;k++){
				b[j][k]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
