#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	double ans,tmp,mn,mx,rightans;
	for(int i=0;i<n;i++){
		tmp=ans=0,mn=1e3,mx=-1e3;
		for(int i=1;i<=m;i++){
			scanf("%lf",&tmp);
			ans+=tmp;
			mn=min(tmp,mn),mx=max(tmp,mx);
		}
		ans-=(mn+mx);
		ans/=m-2;
		rightans=max(ans,rightans);
	}
	printf("%.2lf",rightans);
	return 0;
}
