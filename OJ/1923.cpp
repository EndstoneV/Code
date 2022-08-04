#include<bits/stdc++.h>
using namespace std;
int n,k,a[5000003];
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[k];
	return 0;
}

