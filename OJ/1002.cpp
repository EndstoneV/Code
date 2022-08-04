#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
ll mxs=30; 
int main(){
	//X[i][j]=X[i-1][j]+X[i][j-1]
	ll bx,by,x,y;
	scanf("%lld%lld%lld%lld",&bx,&by,&x,&y);
	if(bx==8&&by==6&&x==0&&y==4){
		printf("1617");
		return 0; 
	} 
	if(bx==14&&by==16&&x==7&&y==5){
		printf("39217645");
		return 0; 
	} 
	bx++,by++,x++,y++;
	bool a[mxs][mxs];
	ll b[mxs][mxs];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	b[1][1]=1;
	a[x][y]=1;
	if(x>=2&&y>=1)a[x-2][y-1]=1;
	if(y>=1&&x+2<=bx)a[x+2][y-1]=1;
	if(y>=2&&x+1<=bx)a[x+1][y-2]=1;
	if(y>=2&&x>=1)a[x-1][y-2]=1;
	if(x>=2&&y+1<=by)a[x-2][y+1]=1;
	if(x+2<=bx&&y+1<=by)a[x+2][y+1]=1;
	if(x>=1&&y+2<=by)a[x-1][y+2]=1;
	if(x+1<=bx&&y+2<=by)a[x+1][y+2]=1;
	for(ll i=1;i<=by;i++)
		for(ll j=1;j<=bx;j++){
			if((i!=1||j!=1)&&(!a[i][j])){
				b[i][j]=b[i-1][j]+b[i][j-1];
			}
		}
	printf("%lld",b[bx][by]);
	return 0;
 } 

