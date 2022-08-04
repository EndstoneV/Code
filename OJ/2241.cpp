#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	ll n,m;
//		i,j
	ll zfx=0,cfx=0; 
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			ll tmp=(n-i+1)*(m-j+1);
			if(i==j) zfx+=tmp;
			else cfx+=tmp;
		}
	}
	cout<<zfx<<" "<<cfx;
 } 
