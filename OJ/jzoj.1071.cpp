#include<bits/stdc++.h>
int main(){
	char s[105];
	gets(s);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]=='O') s[i]='0';
		else if(s[i]=='i') s[i]='1';
		else if(s[i]=='Z') s[i]='2';
		else if(s[i]=='S') s[i]='5';
		else if(s[i]=='b') s[i]='6';
		else if(s[i]=='B') s[i]='8';
		else if(s[i]=='q') s[i]='9';
	}
	for(int i=0;i<=n;i++){
		printf("%c",s[i]);
	}
} 
