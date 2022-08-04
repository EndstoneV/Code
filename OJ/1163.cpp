#include<bits/stdc++.h>
#define ld double
#define ll long long
using namespace std;
ld n, m, k, l, r;
ld check(ld x, ld y){return pow(1.0 / (1.0 + x), y);}
int main()
{
	scanf("%lf%lf%lf", &n, &m, &k);
	l = 0, r = 10;
	while(r - l >= 1e-4){
		ld mid = (l + r) / 2;
		if(check(mid, k) >= 1 - n / m * mid) r = mid;//
		else l = mid;
	}
	printf("%.1lf", l * 100);
	return 0;
}
