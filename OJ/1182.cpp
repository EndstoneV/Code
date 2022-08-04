#include<bits/stdc++.h>
#define ll long long
#define ld double
#define fn for(int i = 1; i <= n; i++)
using namespace std;
int a[100005], n, m, l, r, sum[100005];
int check(int mid){
	int last = a[1], cnt = 1;
	for(int i = 2; i <= n; i++){
		if(a[i] - last >= mid) cnt++, last = a[i - 1];
	}
	return cnt;
}
int summ(int x){
	if(x == 1) return a[1]; 
	else return a[x] + summ(x - 1); 
}
int main(){
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]), l = max(l, a[i]);
	r = summ(n);
	while(l < r){
	    int mid = (l + r + 1) / 2;
	    if(check(mid) >= m) l = mid;
	    else r = mid - 1;
	}
	printf("%d", l);
	return 0;
}
