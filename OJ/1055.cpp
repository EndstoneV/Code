#include<bits/stdc++.h>
using namespace std;
int i(0),j(1),modd;
int main(){
	char a[15],c;
	int sum(0);
	scanf("%s", a);
	while(i<11){
		if(a[i]!=45){
			sum+=(a[i]-48)*j;
			++i;
			++j;
		}
		else ++i;
	}
	modd=sum%11;
//	printf("%d",sum);
	if(modd==10)
		c=88;
	else c=modd+48;
//	cout<<c;
	if(a[12]==c) printf("Right");
	else{
		a[12]=c;
		printf("%s",a);//-
	}
	return 0;;;;;;;;;;;;;; 
}
