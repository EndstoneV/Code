#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b,h[20005],all=0,cnt=0;
	scanf("%d%d",&n,&b);
	for(int i=1;i<=n;i++){
		scanf("%d",&h[i]);
	} 
	sort(h+1,h+n+1,greater<int>());
//	for(int i=1;i<=n;i++) cout<<h[i]<<" ";

	for(int i=1;i<=n;i++){
		all+=h[i];
		cnt++;
		if(all>=b) break;
	}
	printf("%d",cnt); 
	return 0;

}
