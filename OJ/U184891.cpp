#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main()
{
	int n,len=0;
	scanf("%d",&n);
	char s[10];
	for(int i=1;i<=n;i++){
		scanf("%s",s);
		len=strlen(s)-1;
		if(s[len]=='e') printf("%sr %sst\n",s,s);
		else if(s[len]=='y'){
			s[len]='i';
			printf("%ser %sest\n",s,s);
		}
		else if((s[len-1] =='a'||'e'||'i'||'o'||'u' )&&(s[len] !='a'||'e'||'i'||'o'||'u'||'y')){
			printf("%s%cer %s%cest\n",s,s[len],s,s[len]);
		}
		else printf("%ser %sest\n",s,s);
		memset(s,0,sizeof(s));
	}	
	return 0;
 } 
