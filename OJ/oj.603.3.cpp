#include<bits/stdc++.h>
using namespace std;
int w(int a, int b, int c){
	if(a<=0 || b<=0 || c<=0) return 1;
	else if(a>20 || b>20 || c>20) return 1048576;
	else{
		int q(w(a-1,b,c)),s(w(a-1,b-1,c)),e(w(a-1,b,c-1)),r(w(a-1, b-1,c-1)),ans(0);
		ans=ans+q+s+e-r;
		return ans;
	}
}
int main(){
	int a,b,c;scanf("%d%d%d",&a,&b,&c);
	printf("%d",w(a,b,c));
	return 0;
}
//15 7 8


