#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100003],b[100003],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]>a[i]) swap(b[j],b[i]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
}
