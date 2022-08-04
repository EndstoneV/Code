#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int k(0),s(0);
	while(s<n){
		k++;
		s+=k;
	}
	if(k%2==1){
		printf("%d/%d",s-n+1,k+n-s);
	}
	else{
		printf("%d/%d",k+n-s,s-n+1);
	}	
	return 0;
}
