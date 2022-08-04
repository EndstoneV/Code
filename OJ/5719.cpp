#include<bits/stdc++.h>
#define begin int main(){
#define end return 0;}
float ansy,ansn;
int n,k,cnty,cntn,sumy,sumn;
begin
	scanf("%d %d", &n, &k);
	for(int i=1;i<=n;i++){
		if(i%k==0){sumy+=i;cnty++;}
		else{sumn+=i;cnty++;}
	}
	ansy=sumy/cnty;
	ansn=sumn/cntn;
	printf("%.1f %.1f",ansy, ansn);
end
