#include<bits/stdc++.h>
using namespace std;
int sum,mx,a,b,n;
int main(){
	char s[51][37];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=35;j++){
			cin>>s[i][j];
		}
	}
	for(int k=1;k<n;k++)
		for(int i=k+1;i<=n;i++){
			sum=0;
			for(int j=1;j<=35;j++){
				if(s[k][j]==s[i][j])
					sum++;
		   		if(sum>mx){
					a=k;
					b=i;
					mx=sum;
				} 
			}
		}
	cout<<a<<" "<<b;
	return 0; 
} 
