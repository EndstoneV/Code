#include<bits/stdc++.h>
using namespace std;
char c[29]={'a','\0'};
int len;
int main(){
	struct hay{
		char a,b;
	} s[1000000];
	int n,k=1;

	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%*c%c%*c%c",&s[i].a,&s[i].b);
	}
	int h=0;
		for(int j=1;j<=n;j++){
			len = strlen(c);
			while(len>0){
				if(s[j].b==c[len-1]){
					c[h+1]=s[j].a;
					++h;
				}
				len--;
			}
		}
		int inte[29],lenn=strlen(c);
		if(lenn==1){
			printf("none");
		}
		else{
		for(int i=0;i<lenn;i++) inte[i]=(int)c[i];
	sort(inte,inte+h+1);
	for(int i=0;i<=h+1;i++){
		if(inte[i]>=97 && inte[i]<=122) printf("%c ",inte[i]);
	}}
	return 0;
}

