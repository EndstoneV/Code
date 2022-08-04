#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[4];
	gets(s);
	int len=strlen(s+1);
	for(int i=len;i>=0;i--) cout<<s[i];
}
