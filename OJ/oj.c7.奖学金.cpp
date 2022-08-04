#include<bits/stdc++.h>
using namespace std;
int n,c[305],all[305],m[305],en[305],nr[305];//y、z、s、yi、h、分别代表语文、三门总分，数学、英语、学号（就是第几个输入的啦）
int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>m[i]>>en[i];
		nr[i]=i;
		all[i]=c[i]+m[i]+en[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(all[j]<all[j+1]||all[j]==all[j+1]&&(c[j]<c[j+1]||c[j]==c[j+1]&&nr[j]>nr[j+1]))//冒泡最关键的判断部分，打星号
			{
				swap(c[j],c[j+1]);
				swap(all[j],all[j+1]);
				swap(nr[j],nr[j+1]);
			}
		}
	}
	for(int i=1;i<=5;i++)
		cout<<nr[i]<<" "<<all[i]<<endl;
    return 0;
}
