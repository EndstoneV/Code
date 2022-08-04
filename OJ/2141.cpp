#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int main()
{
	int n;
	int cnt(0);
	scanf("%d",&n);
	int a[n+1];
	bool b[n+1];
	memset(b,0,sizeof(b)); 
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(a[k]+a[j]==a[i]&&k!=j&&k!=i){
					b[i]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cnt+=b[i];
	}
	printf("%d",cnt);
	return 0;
}
