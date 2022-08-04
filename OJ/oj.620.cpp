#include <bits/stdc++.h>
using namespace std;
void ans(int a, int b, int h){

	int q = h/(a-b), qyu = h%(a-b);
	if(h == a) printf("%d", 1);
	else if(qyu <= a) printf("%d", q);
	else if(qyu > b) printf("%d", q+1);
}
int main(){
    int h, a, b;
    scanf("%d%d%d", &a, &b, &h); 
	ans(a, b, h);
}
