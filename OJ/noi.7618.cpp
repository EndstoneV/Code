#include<bits/stdc++.h>
using namespace std;
struct kakkka
{
	char xh[15];
	int nl;
};
kakkka a[110],b[110],c;//a lao;b feilao;c input

int main()
{
	int m,f=0,s=0,j;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>c.xh>>c.nl;
		if(c.nl>=60) a[f++]=c;
		else b[s++]=c; 
	}
	kakkka t;
	for(int i=1;i<f;i++)
	{
		t=a[i];
		for(j=i-1;j>=0;j--)
			if(a[j].nl<t.nl) a[j+1]=a[j];
			else break;
		a[j+1]=t;
	}
	for(int i=0;i<f;i++)
		cout<<a[i].xh<<endl;//lnr
	for(int i=0;i<s;i++)
		cout<<b[i].xh<<endl;//flnr
		return 0;
}
