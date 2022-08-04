#include<bits/stdc++.h>
using namespace std;
int leap(int a){
	if((a%4==0 && a%100!=0) || a%400==0)
		return 1;
	else 
		return 0;
}
int main(){
	int a, b, cnt(0);
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i ++){
		if(leap(i)){
			cnt ++;
		}
	}
	printf("%d\n", cnt);
	for(int i = a; i <= b; i ++){
		if(leap(i)){
			printf("%d ", i);
		}
	}
	return 0;
}
