#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a, a+n+1);
	cout<<a[n-1]-a[0];
	return 0;
}

