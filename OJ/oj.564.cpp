#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len=99999;
    int a[len];
    memset(a,0,sizeof(a));
    a[0]=1;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int jw=0;
        int j=0;
        int tmp;
        for(;j<len;j++){
            tmp=jw;
            jw+=a[j]*i;
            jw/=10;
            a[j]=(a[j]*i+tmp)%10;
        }
    }
    int k=len-1;
    while(!a[k]){
        k--;
    }
    for(;k>=0;k--){
	    printf("%d",a[k]);
	}
    return 0;
}
