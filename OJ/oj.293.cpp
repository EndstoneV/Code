#include<bits/stdc++.h>
using namespace std;
int asd(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b); 
	int gcd=asd(a,b),lcm=a*b/gcd;
	printf("%d %d",gcd,lcm);
}
