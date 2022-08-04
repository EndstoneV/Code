#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("magic.in","r",stdin);
//	freopen("magic.out","w",stdout);
	unsigned int n, hang, lie;
	scanf("%d", &n);
	unsigned int a[n+1][n+1];
	memset(a,0,sizeof(a));
	
	a[1][(n + 1) / 2] = 1;
	hang = 1;
	lie = (n + 1) / 2; 
	
	for(int i = 2;i <= n * n; ++ i){
		if(hang == 1 && lie != n){
			a[n][lie + 1] = i;
			hang = n;
			++ lie;
		}
		else if(lie == n && hang != 1){
			a[hang - 1][1] = i;
			-- hang;
			lie = 1;
		}
		else if(lie == n && hang == 1){
			a[hang + 1][lie] = i;
			++ hang;
		}
		else if(lie != n && hang != 1){
			if(a[hang - 1][lie + 1] == 0){
				a[hang - 1][lie + 1] = i;
				-- hang;
				++ lie;
			}
			else{
				a[hang + 1][lie] = i;
				++ hang;
			}
		}
	}
	for(int i = 1; i <= n; ++ i){
		for(int j = 1; j <= n; ++j){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
