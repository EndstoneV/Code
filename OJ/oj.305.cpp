#include<bits/stdc++.h>
using namespace std;
int main(){
	int qj1,qj2;long long ans;int cnt;
	scanf("%d%d",&qj1,&qj2);
	for(int i=qj1;i<=qj2;i++){
	int ghi=sqrt(i);
	for(int j=1;j<=ghi;j++){
		if(ghi%j==0){
			ans+=j+i/j;
			if(i/j==j){
				ans-=j;
			}		
		}
	}if(ans==i) printf("%d",ans);
	ans=0;
	}
	
	return 0;
}
