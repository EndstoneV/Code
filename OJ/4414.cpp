#include<bits/stdc++.h>
using namespace std;
int main(){
	int x[3];
	scanf("%d%d%d ",&x[0],&x[1],&x[2]);
	char a=getchar(),b=getchar(),c=getchar();
	sort(x,x+3);
	printf("%d %d %d",x[a-65],x[b-65],x[c-65]);
	return 0;
}
