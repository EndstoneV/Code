#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main(){
	ll as=1;
	ll x,n;
	scanf("%lld%lld",&x,&n); 
	for(ll i=1;i<=n;i++){
		as=as*x+as;
	}
	printf("%lld",as);
}
