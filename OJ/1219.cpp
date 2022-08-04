#include <bits/stdc++.h>
#define ll long long
#define ld double 
using namespace std;

int a[14], b[3][28], cnt = 0, n;
void sign(int c, int t, int i){
	b[0][i] = c;
	b[1][t + i] = c;
	b[2][t - i + n] = c;
}
void dfs(int t){
	if(t > n) {
		cnt++;
		if(cnt >= 4)
			return;
		else{
			for(int i = 1; i <= n; i++) printf("%d ", a[i]);
			printf("\n");
			return;
		}
	}
	for(int i = 1; i <= n; i++){
		if(b[0][i] || b[1][t + i] || b[2][t - i + n])
			continue;
		a[t] = i;
		sign(1, t, i);
		dfs(t + 1);
		sign(0, t, i);
	}
}
int main(){
	scanf("%d", &n);
	dfs(1);
	printf("%d", cnt);
	return 0;
}

