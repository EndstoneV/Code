#include<bits/stdc++.h>
using namespace std;

int main(){
//	cin>>n;
	long long n=0,ys=0;
	scanf("%lld",&n);
	int lhn=sqrt(n);
	for(int i=1;i<=lhn;i++){
		if(n%i==0){
			ys+=i+n/i;
			if(n/i==i){
				ys-=i;
			}		
		}
	}
//	cout<<ys;
	printf("%lld",ys);
	return 0;
}

