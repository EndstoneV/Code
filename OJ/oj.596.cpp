#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;int p[505];
	cin>>a;cin>>b;
	p[b]=2*b;
	for(int i=b+1;i<=a;i++){
		p[i]=p[i-1]+i;
	}
	cout<<p[a];
}
