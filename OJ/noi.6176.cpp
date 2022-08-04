#include<bits/stdc++.h>
using namespace std;
int n,k,no[102];
float grade[102];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>no[i]>>grade[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(grade[i]>grade[j]){
				swap(grade[i],grade[j]);
				swap(no[i],no[j]);
			}
		}
	}
	if(grade[k]==grade[k-1]){
		if(no[k]>no[k-1]){
			printf("%d %g",no[k-1],grade[k-1]);
			printf("%d %g",no[k],grade[k]);
		}
		if(no[k]<no[k-1]){
			printf("%d %g",no[k],grade[k]);
			printf("%d %g",no[k-1],grade[k-1]);
		}
	}
	else
	printf("%d %g",no[k],grade[k]);
}
