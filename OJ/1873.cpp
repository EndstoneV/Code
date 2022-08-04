#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i=1;i<=n;i++)
using namespace std;
ll m, n;
int mx;
int a[(int)1e6 + 1];
ll check(int mid){
	ll cnt = 0;
	for(int i = 1; i <= n; i++){
		if(mid < a[i]) cnt += a[i] - mid;
	}
	return cnt;
}
int main()
{
	scanf("%lld%lld", &n, &m);
	fn scanf("%d", &a[i]), mx = max(mx, a[i]);
	int l = 1, r = mx;
	while(l < r){
		int mid = (l + r + 1) / 2;
		if(check(mid) >= m) l = mid;
		else r = mid - 1;
	}
	printf("%d", l);
} 
