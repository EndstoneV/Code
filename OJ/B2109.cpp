#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[257];
	int cnt(0);
	gets(s);
	int n=strlen(s);
	for(int i=0;i<=n;i++){
		if(s[i]>='0'&&s[i]<='9') cnt++;
	}
	printf("%d",cnt);
}
