#include<bits/stdc++.h>
using namespace std;
int n,m,l,tmp,sum;
int main(){
	scanf("%d%d%d",&n,&m,&l);
	if(m%n==0){
		if(l-m>=n){//zhijie
			printf("%d",n-1);
			return 0;
		}
		printf("%d",l%n);
		return 0;
	}
	tmp=ceil(m*1.0/n)*n-1;
	if(tmp<=l&&tmp>=m){
		printf("%d",n-1);
		return 0;
	}
	printf("%d",l%n);
	return 0;
}
