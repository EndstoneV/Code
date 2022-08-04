#include<bits/stdc++.h>
using namespace std;
int wei(int www){
	int w=0;
	while(www>=1){
	www=www/10;
	w++;
	}
	return w;
} 
int main(){
	int n;
	scanf("%d",&n);
	int x=1;
//	while(wei(pow(x,x))<=n){
//		x++;
//	}
	cout<<wei((int)(pow(10,10)));
//	cout<<x;
}
