#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a[10005];
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int s=unique(a+1,a+n+1)-a;
	if(k<=s){
		printf("%d",a[k]);
		return 0;
	}
	printf("NO RESULT");
	return 0;
}
