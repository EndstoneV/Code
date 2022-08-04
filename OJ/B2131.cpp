#include"bits/stdc++.h"
int main(){
	struct Phaefapheeguer{
		char name[9];
		float temperature;
		bool cough;
	} s[201];
	int cnt=0;
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%s%f%d",s[i].name,&s[i].temperature,&s[i].cough);
	for(int i=1;i<=n;i++){
		if(s[i].temperature>=37.5 && s[i].cough==1){
			printf("%s\n",s[i].name);
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
