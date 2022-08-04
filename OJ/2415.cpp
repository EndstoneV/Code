#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	ll a[35];
	ll i=0;
	ll cnt=0;
	while(scanf("%lld",&a[i])!=EOF){
		
		cnt+=a[i]; i++;
	}
	cnt*=(ll)(pow(2,i-1));
	printf("%lld",cnt);
}
