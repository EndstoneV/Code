#include<bits/stdc++.h>
using namespace std;
int main(){
	int h1,h2,m1,m2;
	int h,m;
	bool f=false;
	cin>>h1>>m1>>h2>>m2;
	if(m2-m1>=0){
		m=m2-m1;
	}
	else{
		m=m2+60-m1;
		f=true;
	}
	if(f){
		h=h2-h1-1;
	}
	else h=h2-h1;
	printf("%d %d",h,m);
}
