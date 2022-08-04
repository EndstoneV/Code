#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, cnt;
	scanf("%d %d", &m, &n);
	for(int i=m;i<=n;i++){
		if(i%2) cnt+=i;
	}
	printf("%d",cnt);
	return 0; 
}
