#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,mn;
	scanf("%f%f", &a, &b);
	mn = 10 * a + b;
	int ans = floor(mn/19.0);
	printf("%d", ans);
	return 0;
} 
