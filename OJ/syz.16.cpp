#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int a[x+1];
	for(int i=1;i<=x;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+x);
	cout<<a[1]<<" "<<a[x];
}
