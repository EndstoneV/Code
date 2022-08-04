#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
const int SpadeA261_666=114514;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int la=a.size();
	int lb=b.size();
	for(int i=0;i<la;i++) a[i]=tolower(a[i]);
	for(int i=0;i<lb;i++) b[i]=tolower(b[i]);
	a=' '+a+' ';
	b=' '+b+' ';
	if(b.find(a)==b.npos) {
		putchar('-');
		putchar('1');
		return 0;
	} 
	else {
		int cnt=0;
		int ans=0,tmp=0;
		ans=b.find(a);
		while(SpadeA261_666){
			tmp=b.find(a,tmp+1);
			cnt++;
			if(b.find(a,tmp+1)==b.npos) break;
		}
		printf("%d %d",cnt,ans);
	}
 } 
