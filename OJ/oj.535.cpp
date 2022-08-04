#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, cnta = 0, cntb = 0;
	scanf("%d", &n);
	int a[n+1];
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>());
	for(int i = 1; i <= n; i += 2){
		cnta += a[i];
	}
	for(int j = 2; j <= n; j += 2){
		cntb += a[j];
	}
	printf("%d", cnta - cntb);
	return 0;
} 
