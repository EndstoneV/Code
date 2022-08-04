#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main()
{
	ld a,b,c;
	cin>>a>>b>>c; 
	ld ar;
	ld p=a+b+c;
	p/=2.0;
	ar=p*(p-a)*(p-b)*(p-c);
	ar=sqrt(ar);
	printf("%.4lf",ar);
	return 0;
}
