#include<bits/stdc++.h>
using namespace std;
int w(int a, int b, int c){
	if(a<=0 || b<=0 || c<=0) return 1;
	else if(a>20 || b>20 || c>20) return 1048576;
	else{
		int q(w(a-1,b,c)),s(w(a-1,b-1,c)),e(w(a-1,b,c-1)),r(w(a-1, b-1,c-1)),ans;
		ans+=q;
		ans+=s;
		ans+=e;
		ans-=r;
		return ans;
	}
}
inline int f_read(){
   int s(0),w(1);
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
int main(){
	int a(f_read()), b(f_read()), c(f_read());
	printf("%d",w(a,b,c));
	return 0;
}
