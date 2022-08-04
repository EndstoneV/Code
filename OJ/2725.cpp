#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int k,n,f[2000005],a[55],m,i,j; 
int main(){
	while(~scanf("%d%d",&k,&n)){
		for(int l=0;l<n;l++){
			scanf("%d",&a[l]);
		}
		sort(a,a+n);
		f[0]=0;
		i=0;
		while(f[i]<=k){
			i++;
			f[i]=0x3f3f3f;
			for(j=0;j<n&&a[j]<=i;j++){
				if(f[i-a[j]]+1<f[i]){
					f[i]=f[i-a[j]]+1;
				}
	      	}
		}
		printf("%d",i-1);
	}
	return 0;
} 

