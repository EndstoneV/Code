#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[105],m,n;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(a[j]<a[i]){
			swap(a[i],a[j]); 
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
} 
