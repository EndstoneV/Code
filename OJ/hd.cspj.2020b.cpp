/*
	BEEEEEEEEEEEEEEEEEEEEEEEEP!!!!!
*/
#include<bits/stdc++.h>
using namespace std;
#define msize 100004 
int main()
{
	int n,w;
	int a[msize];
	int flag;
	scanf("%d%d",&n,&w);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		sort(a+1,a+i+1,greater<int>());
		flag=floor((w/100.0)*i);
		flag=max(1,flag);
		printf("%d ",a[flag]);
		flag=0;
	}
	return 0;
}
/*
10 60
200 300 400 500 600 600 0 300 200 100
*/
