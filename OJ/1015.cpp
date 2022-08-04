#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int ca=1,cb=1;
int win=0;
int lose=0;
int n,na,nb;
int awin(int a,int b){
	if(a==b) return 139;
	else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==3)||(a==0&&b==4)
		||(a==1&&b==4)||(a==3&&b==0)||(a==4&&b==0)||(a==2&&b==1)||
		(a==3&&b==4)||(a==4&&b==3)) return -1;
	else return 1;
}
void cnc(){
	ca++,cb++;
	if(ca>na) ca=1;
	if(cb>nb) cb=1;
}
int main()
{
	int a[203],b[203];
	scanf("%d%d%d",&n,&na,&nb);
	for(int i=1;i<=na;i++) scanf("%d",&a[i]);
	for(int i=1;i<=nb;i++) scanf("%d",&b[i]);
	for(int i=1;i<=n;i++){
		if(awin(a[ca],b[cb])==1) win++;
		if(awin(a[ca],b[cb])==-1) lose++;
		cnc();
	}
	printf("%d %d",win,lose);
	return 0;
 } 
