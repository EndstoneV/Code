/*beep!*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	int cnt=1;
	scanf("%d",&x);
	int er=(1+x)*x/2.0;
	for(int i=1;i<=x*x;i++){
		printf("%02d",i);
		if(i%x==0) printf("\n");
	}
	
	printf("\n");
	
	for(int i=1;i<=x;i++){
		for(int j=i;j<=x-i;j++){
			printf("  ");
		}
		for(int k=cnt;k<=er;k++){
			int now=0;
			printf("%02d",k);
			++cnt;
			++now;
			if(now==i){
				break;
			}
		}
		printf("\n");
	}
 } 
