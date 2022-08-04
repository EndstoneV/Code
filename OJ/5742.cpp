#include<bits/stdc++.h>
int main(){
	struct Phefapheeguer{
		int id;
		int study;
		int extra;
		int ave;
	} p[1005];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&p[i].id,&p[i].study,&p[i].extra);
		p[i].ave=p[i].study*0.7+p[i].extra*0.3;
	}
	for(int i=1;i<=n;i++){
		if(p[i].extra+p[i].study>140 && p[i].ave>=80) printf("Excellent\n");
		else printf("Not excellent\n");
	}
	return 0;
}
