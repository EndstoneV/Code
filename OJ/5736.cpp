#include<bits/stdc++.h>
using namespace std;
int sus(int a){
	int n=1;
	for(int i=2;i<a;i++)
		if(a%i==0){
			n=0;
			break;
		}
	if(n==1 && a!=0 && a!=1)
		return true;
	else
		return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(!sus(a[i])){
			a[i]=114514;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=114514){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
