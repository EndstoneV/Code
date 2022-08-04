#include <bits/stdc++.h>
#define rt return 
using namespace std;
int ans, n, k, a[21];
bool ifprim(int x) {
	if(x == 1) return 0;
    for(int i = 2; i <= sqrt(x); i++) if(x % i == 0) return 0;
    return 1;
}
void f(int l, int cnt, int s){
	if (cnt == k){
		if(ifprim(s)) ans++;
		rt;
	}
	for(int i = l; i <= n; i++) f(i + 1,cnt + 1,s + a[i]);
	rt;
}
int main(){
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
	f(1, 0, 0), printf("%d", ans);
	rt 0;
}