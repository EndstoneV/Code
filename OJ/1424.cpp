#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, n, cnt = 0;
	scanf("%d%d", &x, &n);
	for(int i = 1, week = x; i <= n; i ++, week ++, cnt ++){
		if(week == 8) week = 1;
		if(week == 6 || week == 7) cnt --;
	}
	printf("%d", cnt * 250);
	return 0;
} 
