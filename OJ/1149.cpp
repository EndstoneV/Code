#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int cnt[2333]={6};
int ans;
int main()
{
	 int n;
	 scanf("%d",&n);
	 for(int i=1;i<=2333;i++){
		int j=i;
			while(j>=1){
		        cnt[i]+=a[j%10];
		        j/=10;
		    }
	 }
	 for(int i=0;i<=1111;i++){
	 	for(int j=0;j<=1111;j++){
			 if(/*i!=j&&*/(cnt[i]+cnt[j]+cnt[i+j]+4)==n)
			 	ans++
//				,printf("%d+%d=%d\n",i,j,i+j)
				;
		 }
	 }
	 printf("%d",ans);
	 return 0;
}

