#include<bits/stdc++.h>
using namespace std;
int main(){
	double a[12];
	double ans=0;
	for(int i=1;i<=10;i++){
		cin>>a[i];
		a[i]=4.0/a[i];
		ans+=a[i];
	}
	printf("%.1lf",ans);
	return 0;
}
