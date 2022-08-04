#include<bits/stdc++.h>
using namespace std;
int n, a[11] = {1}, n2;
void dfs(int t){
	for(int i = a[t - 1]; i <= n2; i++){
		if(i != n){
			a[t] = i;
			n2 -= i;
			if(n2 == 0){
				for(int i = 1; i <= t; i++){
					if(i != t) printf("%d+", a[i]);
					else printf("%d\n", a[i]);
				}
			}
			else dfs(t + 1);
			n2 += i;
		}
	}
}
int main(){
	scanf("%d", &n);
	a[1] = 1;
//	int n2 = n;
	n2 = n;
	dfs(1);
	return 0;
}

