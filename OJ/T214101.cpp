#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int b[1001];
int f[1001]; 
int main()
{
	int mo = 100003;
	int m,n,x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		b[x]=1;
	}
	f[0]=1;
	for(int i=1;i<=n;i++){
		if(!b[i]){
			for(int j=max(0,i-3);j<i;j++){
				f[i]+=f[j];
				f[i]%=mo;
			}
		}
	}
	if(!f[n]){
		putchar('-');
		putchar('1');
		return 0;
	}
	printf("%d",f[n]);
	return 0;
 } 
