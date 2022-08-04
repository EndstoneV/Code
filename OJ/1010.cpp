#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
void mcf(int n){
	int 
	//x=1,
	c=1;
	for(int i=1;i<=(int)2e1;i++){
		c=i;
		if((1<<i)>n){c--;break;}
	}
	if(!c) printf("2(0)");
	if(c==1) putchar(50);
	if(c>1) printf("2("),mcf(c),putchar(41);
	if(1<<c!=n){
		putchar(43);
		mcf(n-(1<<c));
	}
} 
int main(){
	int n;
	scanf("%d",&n);
	mcf(n);
	return 0;
}
