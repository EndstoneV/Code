#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],x,y,gs;//a,pohuai;b,dao;c,baoliu
int jh(int x){
	int f=0;
	while(x>0){
		f=f*10+x%10;
		x=x/10;
	}
	return f;
}
int main(){
	cin>>x>>y;
	gs=y-x+1;
	for(int i=1;i<=gs;i++){
		a[i]=x+i-1;
		b[i]=x+i-1;
	}
//	cout<<endl;
//	for(int i=1;i<=gs;i++){
//		cout<<jh(a[i])<<" ";
//	}
	for(int i=1;i<=gs-1;i++){
		for(int j=i+1;j<=gs;j++){
			if(jh(a[j])<jh(a[i])) 
			swap(a[i],a[j]);
		}
	}
//	cout<<endl;
	for(int i=1;i<=gs;i++){
		cout<<a[i]<<endl;
	}
	
}

