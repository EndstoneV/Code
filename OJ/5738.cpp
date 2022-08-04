#include<bits/stdc++.h>
using namespace std;
int main()
{
	double mx=-999;
	int n,m;
	scanf("%d%d",&n,&m);
	double a[m+1];double b;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[j]);
			b+=a[j];
		}		
		sort(a+1,a+n+1);
		b-=a[1];
		b-=a[m];
		b=b*1.0/(m-2.0);
		if(mx<b){
			mx=b;
		}
		b=0;
	}
	printf("%.2lf",mx);
}
