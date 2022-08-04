#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[33];
	cin>>s;
	int len=strlen(s);
	if(s[len-1]=='r'||s[len-1]=='R'&&s[len-2]=='e'||s[len-2]=='E') s[len-2]='\0';
	else if(s[len-1]=='y'||s[len-1]=='Y'&&s[len-2]=='l'||s[len-2]=='L') s[len-2]='\0';
	else if(s[len-1]=='g'||s[len-1]=='G'&&s[len-2]=='n'||s[len-2]=='N'&&s[len-3]=='i'||s[len-3]=='I')
	s[len-3]='0';
	cout<<s<<endl;
return 0;
}
