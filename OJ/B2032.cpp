#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,n,ns;
	scanf("%d%d",&a1,&a2);
	scanf("%d",&n);
	ns+=a1;
	ns+=(n-1)*(a2-a1);
	printf("%d",ns);
	return 0;
} 
