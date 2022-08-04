#include<bits/stdc++.h>
#define ld double
using namespace std;
int n, f;
ld a[10010], maxn = 0;
int check(double m){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		cnt += a[i] / m;
	}
	return cnt;
}
int main(){
	scanf("%d%d", &n, &f);
	for(int i = 1; i <= n; i++){
		scanf("%lf", &a[i]);
		a[i] = a[i] * a[i] * 3.1415926535897932;
		maxn = max(maxn, a[i]);
	}
	ld l = 0, r = maxn, mid;
	while(r - l >= 1e-6){
		mid = (l + r) / 2;
		if(check(mid) >= f + 1) l = mid;
		else r = mid;
	}
	printf("%.3lf", r);
	return 0;
}
