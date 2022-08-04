#include<bits/stdc++.h>
using namespace std;
long int fact(int n){
	long int cnt;
	if(n==0||n==1) cnt=1;
	else cnt=n*fact(n-1);
	return cnt;
}
int main(){
	int n;
	long int s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=fact(i);
	}
	cout<<s;
} 
