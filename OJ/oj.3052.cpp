#include<bits/stdc++.h>
using namespace std;
int ys;
int main(){
	int a,b;
	cin>>a>>b;
	int lhj;
	for(int j=a;j<=b;j++){
		lhj=sqrt(j);
		for(int i=1;i<=lhj;i++){
			if(j%i==0){
				ys+=i+j/i;
				if(j/i==i){
					ys-=i;
				}		
			}
		}
		ys-=j;
		if(ys==j) printf("%d\n",j);
		ys=0;
	}
	return 0;
}

