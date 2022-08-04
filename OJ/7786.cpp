#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	int n,d;
	int ans(0); 
	scanf("%d%d",&n,&d);
	int a[n+3];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=0) tmp=0;//youdianhuagui0
		else{
			++tmp;
			if(tmp>=d){//1g tele
				ans++;
				tmp=0;
			}
		}
	}
	printf("%d",ans);
	return 0;
 } 
