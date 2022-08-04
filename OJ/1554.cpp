#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int a[11];
void sw(int n){
	while(n>=1){
	a[n%10]++;
	n=n/10;
	}
} 
int main()
{
	memset(a,0,sizeof(a));
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		sw(i);
	}
	for(int i=0;i<=9;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
