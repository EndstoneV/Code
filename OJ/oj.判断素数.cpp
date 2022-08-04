#include<bits/stdc++.h>
#define r return 0
long long a;
using namespace std;
int main(){
    int n=1;
	scanf("%lld",&a);
	for(int i=2;i<sqrt(a);i++)
		if(a%i==0){
			n=0;
			break;
		}
	if(n==1 && a!=0 && a!=1)
		printf("Yes");
	else
		printf("No");
	r;
}
