#include<bits/stdc++.h>
using namespace std;
int n,a[1000100]={},b[1000100]={},c[1000100]={},d=1;
void sr()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
}
void px()
{
	sort(a+1,a+n+1);
}
void bj()
{
	for(int i=1;i<=n-1;i++)
		if(a[i+1]!=a[i])
		{
			c[a[i]]=d;
			d++;
		}
	c[a[n]]=d;
}
void sc()
{
	for(int i=1;i<=n-1;i++)
	cout<<c[b[i]]<<' ';
	cout<<c[b[n]];
}
int main()
{
	sr();
	px();
	bj();
	sc();
	return 0;
}
