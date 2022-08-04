#include<bits/stdc++.h>
using namespace std;
int m;
char c[1005];
int main()
{
	scanf("%d",&m);
	getchar();
	gets(c);
	int lenc=strlen(c);
	for (int i=0;i<lenc;i++)    
	{
		if(i!=0 && c[i]!=48) printf("+");
		if (c[i]=='0') continue;
		printf("%c*%d^%d",c[i],m,strlen(c)-i-1);
	}
	return 0; 
}
