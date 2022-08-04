#include<bits/stdc++.h>
using namespace std;
char a[10005];
int main(){
	gets(a);
	int len=strlen(a),cnt=0,ans=0;
	for(int i=0;i<len;i++){
		if(a[i]==a[i-1]) cnt++;
		else{
			ans=max(cnt,ans);
			cnt=0;
			cnt++;
		}
	}
	//bj
	ans=max(cnt,ans);
	printf("%d",ans);
	return 0;
}
