#include<bits/stdc++.h>
using namespace std;
long long num,a[1001],p,m=10,n,ans[2001];
string s;
int main(){
	int gs,cnt=0;
	scanf("%d", &gs);
	for(int j=1;j<=gs;j++){
    cin>>n>>s;
	int len=s.length();
	for (int i=1; i<=len; i++)
		a[i]=s[i-1]-48;
    for (int i=len,p=1; i>=1; i--,p*=n)
		num+=a[i]*p;
	for (len=1;num>0;num/=m,len++)
		ans[len]=num%m;
	for (int i=len-1;i>=1;i--)
    if (ans[i]>=10)
		cnt+=ans[i]+55;
    else
		cnt+=ans[i]+48;
	}
	printf("%d",cnt);
	return 0;
}
