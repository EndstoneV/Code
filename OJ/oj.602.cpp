#include<bits/stdc++.h>
using namespace std;
long long x,y;
void rec(long long m,char a,char b,char c){
	
	if(m==1){
		printf("%c-%lld-%c\n",a,m,c);
	}
	else{
		
		rec(m-1,a,c,b);
		printf("%c-%lld-%c\n",a,m,c);
		rec(m-1,b,a,c);
	} 
}
int main(){
	scanf("%lld",&x);	
	rec(x,'A','B','C');
	return 0;
}
