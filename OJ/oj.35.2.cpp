#include<bits/stdc++.h>
using namespace std;
int wsum(int w){
	int ws(0);
	while(w >= 1){
		ws += w%10;
		w /= 10;
	}
	return ws;
}
int main()
{
	int l, r;
	int cnt=0;
	scanf("%d%d", &l, &r);
	for(int i = l; i <= r; i++){
		if(i % wsum(i) == 0){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0; 
}
