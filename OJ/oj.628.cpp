#include<bits/stdc++.h>
#define lll long long
using namespace std;
struct gchdn{
	lll t,d;
};
bool cmp(gchdn a,gchdn b){
	return (b.t*a.d>a.t*b.d);
}
int main(){
	lll n;
	lll cnt=0,ccnt=0;
	cin>>n;
	gchdn c[n+1];
	for(lll i=1;i<=n;i++){
		scanf("%lld%lld",&c[i].t,&c[i].d);
	}
	sort(c+1,c+n+1,cmp);
	for(lll j=1;j<n;j++){
		ccnt+=c[j].t<<1;
		cnt+=ccnt*c[j+1].d;
	}
	cout<<cnt;
} 
