#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=10;i++)
using namespace std;
int print0x(string s)
{
	printf("0x");
	long long num,a[1001],ans[2001];
    int n = 10, m = 16;
	int len=s.length();
	for (int i=1; i<=len; i++)
    if (isalpha(s[i-1])) a[i]=s[i-1]-55;
    else if (isdigit(s[i-1])) a[i]=s[i-1]-48;
    for (int i=len,p=1; i>=1; i--,p*=n) num+=a[i]*p;
	for (len=1;num>0;num/=m,len++) ans[len]=num%m;
	for (int i=len-1;i>=1;i--){
		if (ans[i]>=10) printf("%c", ans[i]+55);
    	else printf("%c",ans[i]+48); 
	} 
	return 0;
}
int chk(string s){
	long long num,a[1001], q = 0,ans[2001];
	int len=s.length();
	for (int i=1; i<=len; i++){
		if (isalpha(s[i-1])) a[i]=s[i-1]-55;
   		else if (isdigit(s[i-1])) a[i]=s[i-1]-48;
	}
    for (int i=len,p=1; i>=1; i--,p*=10) num+=a[i]*p;
	for (len=1;num>0;num/=16,len++) ans[len]=num%16;
	for (int i=len-1;i>=1;i--){
	    q++;
	}
	return q;
}
int main()
{
	int c = 1;
	string in;
	cin >> in;
	int l = in.length();
	for(int i = 0; i < l; i++) if(in[i] == ',') c++;
	int tmp = 1;
	string ts;
	putchar('{');
	for(int i = 1; i < l - 1; i++){
		if(in[i] == ',') ts = in.substr(tmp, i - tmp), tmp = i + 1;
		if(chk(ts)+2 <= ts.length()) print0x(ts);
		else cout << ts;
		if(i != c)putchar(',');
	}
	putchar('}');
	return 0;
 } 
