#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[105];
	scanf("%d",&n);
	for(int i=n;i>=0;i--) 
		scanf("%d",&a[i]);
	for(int i=n;i>=1;i--){
		if(a[i]){
		if(i!=n && a[i]>0)
			putchar('+');
        if(a[i]<-1 || a[i]>1)
			printf("%d",a[i]);
        if(a[i]==-1 && i!=1)
			putchar('-');
        if(i>1)
           	printf("x^%d",i);
        if(i==1)
			putchar('x');	
		}
	}
	if(a[0]!=0){
		if(a[0] > 0)
			printf("+");
		printf("%d", a[0]);
	}
	return 0;
} 
