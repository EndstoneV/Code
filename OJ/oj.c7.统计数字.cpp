#include"bits/stdc++.h"
using namespace std;
int a[200002],n,cnt=1;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	for(int k=0;k<n;){
		if(a[k+1]==a[k]) {cnt++;
		k++;
		}
		else {
			cout<<a[k]<<" "<<cnt<<endl;
			cnt=1;
			k++;
		}
//		cout<<k<<" ";
}
}
