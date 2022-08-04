#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int n;
	int ans=0;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1); 
	if(n%2==1){
		int n_ =n+1;
		n_/=2;
		for(int i=1;i<n_;i++) ans+=(a[n_]-a[i]);
		for(int i=n_+1;i<=n;i++) ans+=(a[i]-a[n_]);
	} 
	else{
		int bz=a[n/2+1]; 
		for(int i=1;i<n/2+1;i++){
			ans+=bz-a[i];
		}
		for(int i=n/2+1;i<=n;i++){
			ans+=a[i]-bz;
		}
	}
	cout<<ans;
} 
/*
6,2,9,1
1 2 6 9
2+1+3+6
12
*/
