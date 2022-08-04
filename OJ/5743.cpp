#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans(1);
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		ans=(ans+1)*2;
	}
	printf("%d",ans);
	return 0;
}
