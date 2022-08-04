#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
string tg[10]={"¼×","ÒÒ","±û","¶¡","Îì","ÒÑ","¸ı","ĞÁ","ÈÉ","¹ï"}, dz[12]={"×Ó","³ó","Òú","Ã®","³½","ËÈ","Îç","Î´","Éê","ÓÏ","Ğç","º¥"};
int g,n,x,y;
int main()
{
	scanf("%d",&g);
	for(int i=1;i<=g;i++){
		scanf("%d",&n);
		n-=124;
		x=n%10;
		y=n%12;
		cout<<tg[x]<<dz[y]<<"Äê\n";
	}
	return 0;
}
