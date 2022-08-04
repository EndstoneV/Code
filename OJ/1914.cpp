#include<bits/stdc++.h>
using namespace std;
char s[55],ok[55];
int main(){
	int n;
	scanf("%d",&n);
	n=n%26;
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]+n>122){
			ok[i]=s[i]-26+n;
		}
		else ok[i]=s[i]+n;
	}
	printf("%s",ok);
	return 0;
}
