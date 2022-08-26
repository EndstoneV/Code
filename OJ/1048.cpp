#include<bits/stdc++.h>
using namespace std;
int n, m, w[3405], d[12883], f[12883];
int dp(){
	for(int i = 1; i <= n; i ++){
		for(int j = m; j >= w[i]; j--){
			f[j] = max(f[j], f[j - w[i]] + d[i]);
		}
	}
	return f[m];
}

int main(){
	// scanf("%d%d", &m, &n);
    scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i ++){
		scanf("%d%d", &w[i], &d[i]);
	}
	printf("%d ", dp());
	return 0;
}