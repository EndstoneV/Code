#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,nsr;
	cin>>a;
	while(a!=0){
		nsr=nsr*10+a%10;
		a=a/10;
	}
	cout<<nsr;
	return 0;
}
