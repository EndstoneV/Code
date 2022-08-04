#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	ll d=b-a;
	ll ans;
	ans=c*a+c*(c-1)*d/2;
	printf("%lld",ans);
	return 0;
}
