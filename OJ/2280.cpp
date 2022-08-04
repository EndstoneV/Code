#include<bits/stdc++.h>
using namespace std;
int a[5002][5002],n,m;
int f(int i,int j){
	int i1=i+m,j1=j+m;
	return a[i1][j1]-a[i][j1]-a[i1][j]+a[i][j];
}
int main(){
	scanf("%d%d",&n,&m);
	int x,y,z;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&x,&y,&z);
		a[x+1][y+1]=z;
	}
	for(int i=1;i<=5001;i++){
		for(int j=1;j<=5001;j++){
			a[i][j]+=a[i][j-1];
		}
	}
	for(int i=1;i<=5001;i++){
		for(int j=1;j<=5001;j++){
			a[i][j]+=a[i-1][j];
		}
	}
	int t=5001-m,ans=0;
	for(int i=0;i<=t;i++){
		for(int j=0;j<=t;j++){
			ans=max(ans,f(i,j));
		}
	}
	printf("%d",ans);
	return 0;
}
