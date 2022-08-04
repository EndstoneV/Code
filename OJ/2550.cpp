#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	int a[8];
	int p[8];
	int w=0;
	int cnt[8];
	memset(a,0,sizeof(a));
	memset(cnt,0,sizeof(cnt));
	int n;
	cin>>n;
	for(int k=1;k<=7;k++){
		cin>>p[k]; 
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=7;i++){
			cin>>a[i];
			for(int j=1;j<=7;j++){
				if(a[i]==p[j]){
					w++;
				}
			}	
		}
		cnt[w]++;
		memset(a,0,sizeof(a));
		w=0;
	}
	for(int i=7;i>=1;i--){
		printf("%d ",cnt[i]);
	}
	return 0;
 } 
