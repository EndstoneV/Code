#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
ld n, p;
ld cnt;
ld a[100005], b[100005];
ld check(ld mid){
	ld e = p * mid, sum = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] * mid > b[i]) sum += (a[i] * mid - b[i]);
	}
	return e - sum;
}
int main()
{
	scanf("%lf%lf", &n, &p);
	fn scanf("%lf%lf", &a[i], &b[i]), cnt += a[i];
	if(cnt <= p){
		putchar('-');
		putchar('1');
		return 0;
	}
	ld l = 0, r = 2499975000;
	while(r - l > 0.00001){
		ld mid = (l + r) / 2.0;
		if(check(mid) > 0.0) l = mid;
		else r = mid;
	}
	printf("%lf", l);
	return 0;
}

