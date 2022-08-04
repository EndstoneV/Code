#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4],ans[3];
	cin>>a[1]>>a[2]>>a[3];
	sort(a+1,a+4);
	ans[1]=a[1];
	ans[2]=a[3];
	for(int i=1;i<=a[3];i++){
		if(ans[1]%i==0 && ans[2]%i==0){ans[1]/=i;ans[2]/=i;}
	}
	printf("%d/%d",ans[1],ans[2]);
	return 0;
}
