#include<bits/stdc++.h>
long long fa(int n){
	if(n==1) return 1; 
	else return n*fa(n-1);
}
int main(){
	int m;
	long long x;
	scanf("%d",&m);
	x=fa(m);
	printf("%lld",x);
	return 0;
} 
