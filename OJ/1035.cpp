#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int main()
{
	ld k;
	scanf("%lf",&k);
	ld r,n;
	r=0;n=1;
	while(r<k){
		r+=1/n*1.0;
		n++;
	}
	printf("%.0lf",n-1);
	return 0;
 } 
