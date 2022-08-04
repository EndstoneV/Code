#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1003],n;
	float grade,ng=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n);
//	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	for(int i=2;i<n;i++){
		ng+=a[i];
	}
	grade=ng/(n-2);
	printf("%.2f",grade);
	return 0;
}

