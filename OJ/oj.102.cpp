#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt(0);
	scanf("%d", &n);
	int a[n+1];
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; ++ i){
		for(int j = i; j <= n; ++ j){
			if(a[i]>a[j]){
				swap(a[i], a[j]);
				++ cnt;
				for(int i = 1; i <= n; ++ i){
					printf("%d ", a[i]);
				}
				printf("\n");
			}
		}
	}
//	for(int i = 1; i <= n; ++ i){
//		printf("%d ", a[i]);
//	}
	printf("%d", cnt);
	return 0;
}
