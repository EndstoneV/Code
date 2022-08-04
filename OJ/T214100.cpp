#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
/*
	ÆæÊý(F)	F[i-4] + F[i-3]
	Å¼Êý(F) F[i-2] + F[i-1] 
*/
int main()
{
	ll m=100003;
	ll n;
	scanf("%lld",&n);
	ll f[n];
	memset(f,0,sizeof(f));
	f[2]=1;
	f[3]=1; 
	for(ll i=4;i<=n;i++){
		if(i%2) f[i]=(f[i-4]%m+f[i-3]%m)%m;
		else f[i]=(f[i-2]%m+f[i-1]%m)%m;
	}
	printf("%lld",f[n]);
	return 0;
}
