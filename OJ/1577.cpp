#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
int n, k;
ld l[100003];
int chk(ld x){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(l[i] >= x){
			cnt += floor(l[i] / x);
		}
	}
	return cnt;
}
int main()
{
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++) scanf("%lf", &l[i]);
	ld l = 0, r = 100000;
	while(r - l >= 0.001){
		ld mid = (l + r) / 2;
		if(chk(mid) >= k) l = mid;
		else r = mid; 
	}
	printf("%.2lf", floor(r * 100) / 100);
	return 0;
}
