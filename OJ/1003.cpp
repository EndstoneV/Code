#include<bits/stdc++.h>
using namespace std;
struct s{
	int a,b,g,k;
} d[10005];
int n,x,y;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d%d",&d[i].a,&d[i].b,&d[i].g,&d[i].k);
	}
	scanf("%d%d",&x,&y);
	for(int i=n;i>=1;i--){
		if( (d[i].a<=x && d[i].a+d[i].g>=x) && (d[i].b<=y && d[i].b+d[i].k>=y) ){
			printf("%d",i);
			return 0;
		}
	} 
	putchar('-');
	putchar('1');
	return 0;
}
