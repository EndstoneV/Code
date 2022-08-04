#include<bits/stdc++.h>
int main(){
	int x;
	std::cin>>x;
	x%=10;
//	printf("%d",x);
	if(x==2||x==4||x==5||x==7||x==9) printf("hon");
	else if(x==3) printf("bon");
	else printf("pon");
	return 0;
}	
