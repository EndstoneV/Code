#include<bits/stdc++.h>
using namespace std;
int main()
{
	double f;
	scanf("%lf",&f);
	f-=32;
	f/=9.0;
	f*=5;
	printf("%.4lf",f);
	return 0;
}
