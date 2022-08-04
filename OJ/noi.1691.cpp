#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[85];
	gets(s);
	int n=strlen(s);
	for(int i=0;i<=n;i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]-=32;
//			cout<<s[i];
		}
		else if(s[i]>='A'&&s[i]<='z'){
			s[i]+=32;
//			cout<<s[i];
		}
	}
	for(int i=0;i<=n;i++){
		printf("%c",s[i]);
	} 
}
