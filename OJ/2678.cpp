#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int l, n, m, le, r, ans;
int a[50005];
int check(int mid){
	int last = 0, cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] - a[last] >= mid) last = i;
		else cnt++; 
	}
	return cnt;
} 
int main()
{
	scanf("%d%d%d", &l, &n, &m);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	le = 0, a[n + 1] = l, r = l;
	while(le < r){
		int mid = (le + r + 1) / 2;
		if(check(mid) <= m) le = mid, ans = mid;
		else r = mid - 1;
	}
	printf("%d", le);
	return 0;
}

