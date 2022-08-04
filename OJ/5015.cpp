#include<bits/stdc++.h>
int main(){
	char s[7];
	gets(s);
	int n=strlen(s),cnt(0);
	for(int i=0;i<=n;i++){
		if(s[i]!=32&&s[i]!=10) cnt++;
//		printf("%c ",s[i]);
	}
	printf("%d",cnt);
}
