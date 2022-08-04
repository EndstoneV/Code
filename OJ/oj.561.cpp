#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100005],b[6];
	cin>>a>>b;
	int k;
	int tmp;
	int q=0;
	int rt=0;
	int  cnt=1;
	cin>>k;
	int la=strlen(a);
	int lb=strlen(b);
	for(int i=1;i<=la;i++){
		if(a[i]==b[1]){
			for(int j=i,tmp=i;j<=lb+i-1;j++,cnt++){
				if(a[j]==b[cnt]){
					rt++;
				}
				if(rt==lb){
					q++;
				}
				if(q==k){
					printf("%d",tmp);
				}
			}
		}
	}
}
