#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-1;j>=i;j--) printf(" ");
		for(int k=2*i-1;k>=1;k-=1) printf("%d",i); 
		printf("\n"); 
	}
	for(int i=n-1;i>=1;i--){
		for(int j=n-1;j>=i;j--) printf(" ");
		for(int k=2*i-1;k>=1;k-=1) printf("%d",i); 
		printf("\n"); 
	}
	return 0;
}
