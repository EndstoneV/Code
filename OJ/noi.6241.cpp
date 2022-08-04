#include<bits/stdc++.h>
using namespace std;
int n,a[505],b[505];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2!=0) b[i]=a[i];
		else a[i]=0;
	}
	sort(b,b+n+1);
	for(int i=1;i<n;i++){
		if(b[i]!=0) cout<<b[i]<<",";
	}
	cout<<b[n];
}
