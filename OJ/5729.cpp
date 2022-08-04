#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int a[21][21][21];
int cnt=0;
int x1,x2,ya,y2,z1,z2;
void dig(int x1,int x2,int ya,int y2,int z1,int z2){
	for(int i=x1;i<=x2;i++){
		for(int j=ya;j<=y2;j++){
			for(int z=z1;z<=z2;z++){
				a[i][j][z]=0;
				cnt++;
			}
		}
	}
}
int main()
{
	int w,x,h;
	scanf("%d%d%d",&w,&x,&h);
	int v=w*x*h;
	memset(a,1,sizeof(a));
	int q;
	scanf("%d",&q);
	while(q--){
		scanf("%d%d%d%d%d%d",&x1,&ya,&z1,&x2,&y2,&z2);
		dig(x1,x2,ya,y2,z1,z2);
	}
	printf("%d",v-cnt);
}
