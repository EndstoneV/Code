#include <bits/stdc++.h>
using namespace std;
int n; 
int a[10003];
int cnt;
int main() {
	//shurushuzu
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//suanfa
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				cnt++;
			}
	cout<<cnt;
}
