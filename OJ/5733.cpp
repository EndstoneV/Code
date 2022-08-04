#include <bits/stdc++.h>
using namespace std;
int main(){
	char c[105];
	gets(c);
	int len=strlen(c+1);
	for(int i=1;i<=len;i++){
		if(c[i]<='z'&&c[i]>='a') c[i]-=32;
	}
	puts(c);
	return 0;
} 
