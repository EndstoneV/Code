#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1005],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	cout<<a[0];
	return 0;
}

