//class 7 校门外的树 
#include<bits/stdc++.h>
using namespace std;
int l,qzd[2],b[10001],m,cnt=0;
int main()
{
    cin>>l>>m;
    for(int i=0;i<=l;i++)
        b[i]=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<2;j++)
		cin>>qzd[j]; 
        for(int j=0;j<=l;j++)
            if(j>=qzd[0]&&j<=qzd[1]) b[j]=1;
    }
    
    
    for(int i=0;i<=l;i++){
        if(b[i]==0){
			cnt++;
		}
	}
    printf("%d",cnt);
}
