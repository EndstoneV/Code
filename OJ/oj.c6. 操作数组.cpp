#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int k[150];
	for(int i=1;i<=n;i++)
	scanf("%d",&k[i]);
	int s;
	scanf("%d",&s); 
	for(int j=1;j<=s;j++)
	{
		int x,y,z;
		scanf("%d",&x);
		if(x==1)
		{
			cin>>y;
			cout<<k[y]<<endl;
		}
		
		if(x==2)
		{
			cin>>y>>z;
			for(int i=n;i>=y+1;i--)
		        k[i+1]=k[i];
		    k[y+1]=z;
		    n++;
		}
		
		if(x==3)
		{
			cin>>y;
		    for(int i=y;i<=n;i++)
		        k[i]=k[i+1];
		    n--;
		}
		
		if(x==4)
		{
			cin>>y;
			z=0;
			for(int i=1;i<=n;i++)
			{
				if(k[i]==y)
				{
					z=1;
					cout<<i<<endl;
				    break;
				}
			}
			
			if(z==0)
			    cout<<"-1"<<endl;
		}
	}
return 0;
}
