#include<bits/stdc++.h>
using namespace std;
int n,c[305],all[305],m[305],en[305],nr[305];//y��z��s��yi��h���ֱ�������ġ������ܷ֣���ѧ��Ӣ�ѧ�ţ����ǵڼ������������
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
			if(all[j]<all[j+1]||all[j]==all[j+1]&&(c[j]<c[j+1]||c[j]==c[j+1]&&nr[j]>nr[j+1]))//ð����ؼ����жϲ��֣����Ǻ�
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
