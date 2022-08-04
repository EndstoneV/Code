#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	cin>>n>>k;
	int a[n+1];
	memset(a,0,sizeof(a));
	for(int i=1;i<=k;i++) a[i]=1;
	for(int i=k+1;i<=n+1;i++){
		for(int j=1;j<i;j++){
			a[i]+=a[j];
		}
	}
	printf("%d",a[n]);
}
 
