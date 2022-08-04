#include<bits/stdc++.h>
using namespace std;
long long cnt;
int main(){
	long long  n;
	scanf("%lld",&n);
	long long a[n+1]; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cnt+=abs(a[i]-a[j]);
		} 
	}
	printf("%lld",cnt); 
} 
