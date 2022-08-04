#include<bits/stdc++.h>
int main(){
	char s[1000];
	scanf("%s", s);
	int l=strlen(s);
	for(int i=l-1;i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}
