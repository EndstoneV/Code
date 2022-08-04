#include<bits/stdc++.h>
using namespace std;
int cnt = 0;int
main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int a[n+1];
	for(int i = 1; i <= k; ++ i){
		a[i] = 1;
	}
	for(int i = 1; i <= n; ++ i){
		for(int j = 1; j < i; ++ j){		
			a[i] += a[j];
			cnt += a[i];
		}
	}
	printf("%d", cnt);
	return 0;
}
