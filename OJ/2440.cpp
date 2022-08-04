#include <bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i = 1; i <= n; i++)
#define stoZKXorz 1000005
using namespace std;
ll n, k, a[stoZKXorz];
ll check(ll x){
	ll cnt = 0;
	fn{
		cnt += a[i] / x;
	}
	return cnt;
}
int main()
{
	scanf("%lld%lld", &n, &k);
	fn scanf("%lld", &a[i]);
	ll l = 0, r = 1e8 + 1;
	while(l < r) {
		ll mid = (l + r + 1) / 2;
		if(check(mid) >= k) l = mid;
		else r = mid - 1;
	}
	printf("%lld", l);
	return 0;
}
