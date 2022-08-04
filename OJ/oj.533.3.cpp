/*oops*/
#include<bits/stdc++.h>
using namespace std;
int p,n,t;
int main()
{
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		if(p==n-2){
			if(!(i%2)){
				for(int j=0;j<n;j++){
					if(a[j]!=-1){
						printf("%d",a[j]);
						return 0;
					}
				}
			}
			if(i%2){
				for(int j=n-1;j>=0;j--)
					if(a[j]!=-1)
					{
						printf("%d",a[j]);
						return 0;
					}
			}
			break;
		}
		if(!(i%2)){
			t=0;
			for(int j=0;j<n;j++){
				if(a[j]!=-1){
			        t++;
			        if(t==3){
				        t=0;//gl
				        a[j]=-1;
						p++;
					}
				}
			}
		}
		else{
			t=0;
			for(int j=n-1;j>=0;j--){
				if(a[j]!=-1){
					t++;
					if(t==3){
						t=0;//gl
						a[j]=-1;
						p++;
					}
				}
			}
		}
	}
	return 0;
}
