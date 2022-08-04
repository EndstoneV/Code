#include<bits/stdc++.h>
#define ll long long
#define ld double 
using namespace std;

int ans;
int a[100001][4];
int main(){
	int n, q;
	scanf("%d", &q);
	for(int akioi = 1; akioi <= q; akioi++){
		memset(a, 0, sizeof(a));
		ans = 0; 
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i][2]);
		}
		for(int i = 0; i <= 1; i++){
			for(int j = 0; j <= n + 10; j++){
				a[j][1] = 0;
			}
			a[1][1] = i;
			for(int j = 1; j <= n; j++){
				int sum = 0;
				for(int k = j - 1; k <= j + 1; k++){
					sum += a[k][1];
				}
				if((j == n) && (sum == a[j][2])){
					ans++;
				}
				if(a[j][2] - sum == 1){
					a[j + 1][1] = 1;
				}
				else if(a[j][2] - sum > 1) {
					break;
				}
				else if(sum == a[j][2]) {
					a[j + 1][1] = 0;	
				}
				else{
					break;
				}
			}	
		}
		printf("%d\n", ans);
	}
	return 0;
}
