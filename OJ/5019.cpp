#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	ll n=0,ans=0,sum1=0,sum2=0;
	scanf("%lld",&n);
	int d[n+1],e[n+1];
	memset(d,0,sizeof(d));
	memset(e,0,sizeof(e));
	for(int i=1;i<=n;i++)
		scanf("%d",&d[i]);
	for(int i=1;i<=n;i++)
	{
		e[i]=d[i]-d[i-1];
		if(e[i]<0)  sum1-=e[i];
		if(e[i]>0)  sum2+=e[i];
	} 
	ans=max(sum1,sum2);
	printf("%lld",ans);
}
