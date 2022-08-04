#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int ans, b = 0;
	bool flag = true;
	for(int i=2;i<=n;i++){
		flag = 1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag = false;
				break;
			}
		}
		if(flag && n % i == 0){
			b = i;
			break;
		}
	}
	ans = n / b;
	ans = max(b, ans);
	printf("%d", ans);
}
