#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r,h;
	int cnt=0;
	scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		h=0;
		while(i>=1){
			h+=i%10;
			i/=10;
		}
		if(i%h==0){
			cnt++;
		}
		cout<<i<<" "; 
	}
	printf("%d",cnt);
}
