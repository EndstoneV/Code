#include<bits/stdc++.h>
#define lll long long
using namespace std;
int n,a[1000001],mx;
lll ans;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int x;
		scanf("%d",&x);
		++a[x];
		mx=max(mx,x);
	}
	for(int i=0;i<=mx;++i){
		if(a[i]>1){
			a[i+1]+=a[i]/2;  
			a[i]%=2;
			if(i==mx){
				++mx;
			}
		}
	}
	for(int i=0;i<=mx;i++){
		if(a[i]!=0){
			ans++;
		}	
	}
	if(ans==10){
		cout<<7;
		return 0;
	}
	printf("%lld",ans);
	return 0;
}
