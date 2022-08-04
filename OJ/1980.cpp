#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int cnt=0;
void count(int n,int x){
	while(n!=0){
	if(n%10==x) cnt++;
	n/=10;
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int x;
	scanf("%d",&x);
	for(int i=1;i<=n;i++){
		count(i,x);
	}
	printf("%d",cnt);
	return 0;
}
