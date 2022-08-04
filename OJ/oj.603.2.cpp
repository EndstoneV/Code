#include<bits/stdc++.h>
using namespace std;
int f[21][21][21];
int a, b, c;
int w(int a, int b, int c)
{
	if(a<=0 || b<=0 || c<=0) return 1;
	else if(a>20 || b>20 || c>20) return 1048576;
	else if(f[a][b][c]) return f[a][b][c];
	else f[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
	return f[a][b][c];
}
inline int f_read(){
   int s(0),w(1);
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
int main()
{
	int a(f_read()), b(f_read()), c(f_read());
	printf("%d", w(a, b, c));
	return 0;
}
