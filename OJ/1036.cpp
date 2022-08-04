#include<bits/stdc++.h>
using namespace std;
#define rt return
int ans,n,k,a[100];
bool z(int hsz){
	for(int i=1;i*i<=n;i++) if(!(hsz%i)) rt false;
	rt true;	
}
void f(int l,int cnt,int sum){
	if(cnt==k&&z(sum)){
		++ans;
	}
	for(int i=l;i<=n;i++){
		f(i+1,cnt+1,sum+a[i]);
	}
}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	f(1,0,0);
	printf("%d",ans);
	rt 0;
}
