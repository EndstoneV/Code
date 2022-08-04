#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,a[1003],ns=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	for(int i=1;i<=n;i++){
		ns=ns+a[i]*(n-i+1);
	}
	cout<<ns;
}
