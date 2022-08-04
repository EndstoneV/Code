#include<bits/stdc++.h>
#define r return 0
using namespace std;
int main(){
	int s,v;
	int h,m; 
	scanf("%d%d",&s,&v);
	int tm=ceil(s*1.0/v);
	int altm=24*60+8*60-10;
	altm-=tm;
	if(altm>24*60){
		altm-=24*60;
		h=/*(int)*/floor(altm*1.0/60);
		m=altm%60;
		printf("%02d:%02d",h,m);
		r;
	}
	else if(altm==24*60){
		printf("00:00");
		r;
	}
	else{
		h=/*(int)*/floor(altm*1.0/60);
		m=altm%60;
		printf("%02d:%02d",h,m);
		r;
	}
} 
