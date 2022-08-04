#include<bits/stdc++.h>
int main(){
	int n,a[102];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=1;i--){
		printf("%d ",a[i]);
	}
	return false;
}
