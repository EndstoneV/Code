#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11],o[11],e[11],cnte=1,cnto=1;
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	for(int i=1;i<=10;i++){
		if(a[i]%2==0){
			e[cnte]=a[i];
			cnte++;
		} 
		else{
			o[cnto]=a[i];
			cnto++;
		}
	}
	sort(e+1,e+cnte);
	sort(o+1,o+cnto,greater<int>());
	for(int i=1;i<cnto;i++){
		cout<<o[i]<<" ";
	}
	for(int i=1;i<cnte;i++){
		cout<<e[i]<<" ";
	}
	return 0;
}

