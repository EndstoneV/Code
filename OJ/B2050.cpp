#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[2];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]+a[1]>a[2]) cout<<1;
	else cout<<0;
}
