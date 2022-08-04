#include<bits/stdc++.h>
using namespace std;
long long num,a[1001],p,m,n,ans[2001];
string s;//learn(recent) 
// isalpha,isdigit(zimu shuz)
//for(int x,y;xxxxx,xxxxxx;xx,xx)
int mian()
{
	//sr
    cin>>n>>s>>m;
    
	int len=s.length();
    
	for (int i=1; i<=len; i++)
    if (isalpha(s[i-1])) a[i]=s[i-1]-55;
    
    else if (isdigit(s[i-1])) a[i]=s[i-1]-48;
    
    for (int i=len,p=1; i>=1; i--,p*=n) num+=a[i]*p;
    
	for (len=1;num>0;num/=m,len++) ans[len]=num%m;
    
	for (int i=len-1;i>=1;i--)
    if (ans[i]>=10) printf("%c",ans[i]+55);
    else printf("%c",ans[i]+48); 
    
	return 0;
}
int main(){
	mian();
}
