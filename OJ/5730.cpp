#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int n;
int i;
char s[102];
void k1(){
	if(s[i]=='0'){
		printf("XXX");
	}
	else if(s[i]=='1'){
		printf("..X");
	}
	else if(s[i]=='2'){
		printf("XXX");
	}
	else if(s[i]=='3'){
		printf("XXX");
	}
	else if(s[i]=='4'){
		printf("X.X");
	}
	else if(s[i]=='5'){
		printf("XXX");
	}
	else if(s[i]=='6'){
		printf("XXX");
	}
	else if(s[i]=='7'){
		printf("XXX");
	}
	else if(s[i]=='8'){
		printf("XXX");
	} 
	else if(s[i]=='9'){
		printf("XXX");
	}
	if(i!=n-1){
		printf(".");
	}
	if(i==n-1){
		printf("\n");
	}
}
void k2(){
	if(s[i]=='0'){
		printf("X.X");
	}
	else if(s[i]=='1'){
		printf("..X");
	}
	else if(s[i]=='2'){
		printf("..X");
	}
	else if(s[i]=='3'){
		printf("..X");
	}
	else if(s[i]=='4'){
		printf("X.X");
	}
	else if(s[i]=='5'){
		printf("X..");
	}
	else if(s[i]=='6'){
		printf("X..");
	}
	else if(s[i]=='7'){
		printf("..X");
	}
	else if(s[i]=='8'){
		printf("X.X");
	} 
	else if(s[i]=='9'){
		printf("X.X");
	}
	if(i!=n-1){
		printf(".");
	}
	if(i==n-1){
		printf("\n");
	}
}
void k3(){
	if(s[i]=='0'){
		printf("X.X");
	}
	else if(s[i]=='1'){
		printf("..X");
	}
	else if(s[i]=='2'){
		printf("XXX");
	}
	else if(s[i]=='3'){
		printf("XXX");
	}
	else if(s[i]=='4'){
		printf("XXX");
	}
	else if(s[i]=='5'){
		printf("XXX");
	}
	else if(s[i]=='6'){
		printf("XXX");
	}
	else if(s[i]=='7'){
		printf("..X");
	}
	else if(s[i]=='8'){
		printf("XXX");
	} 
	else if(s[i]=='9'){
		printf("XXX");
	}
	if(i!=n-1){
		printf(".");
	}
	if(i==n-1){
		printf("\n");
	}
}
void k4(){
	if(s[i]=='0'){
		printf("X.X");
	}
	else if(s[i]=='1'){
		printf("..X");
	}
	else if(s[i]=='2'){
		printf("X..");
	}
	else if(s[i]=='3'){
		printf("..X");
	}
	else if(s[i]=='4'){
		printf("..X");
	}
	else if(s[i]=='5'){
		printf("..X");
	}
	else if(s[i]=='6'){
		printf("X.X");
	}
	else if(s[i]=='7'){
		printf("..X");
	}
	else if(s[i]=='8'){
		printf("X.X");
	} 
	else if(s[i]=='9'){
		printf("..X");
	}
	if(i!=n-1){
		printf(".");
	}
	if(i==n-1){
		printf("\n");
	}
}
void k5(){
	if(s[i]=='0'){
		printf("XXX");
	}
	else if(s[i]=='1'){
		printf("..X");
	}
	else if(s[i]=='2'){
		printf("XXX");
	}
	else if(s[i]=='3'){
		printf("XXX");
	}
	else if(s[i]=='4'){
		printf("..X");
	}
	else if(s[i]=='5'){
		printf("XXX");
	}
	else if(s[i]=='6'){
		printf("XXX");
	}
	else if(s[i]=='7'){
		printf("..X");
	}
	else if(s[i]=='8'){
		printf("XXX");
	} 
	else if(s[i]=='9'){
		printf("XXX");
	}
	if(i!=n-1){
		printf(".");
	}
	if(i==n-1){
		printf("\n");
	} 
}
int main()
{
	scanf("%d",&n);
	scanf("%s",s);
	for(int k=1;k<=5;k++) 
	for(i=0;i<n;i++){
		if(k==1){
			k1();
		}
		if(k==2){
			k2();
		}
		if(k==3){
			k3();
		}
		if(k==4){
			k4();
		}
		if(k==5){
			k5();
		}
	} 
	return 0;
 } 
