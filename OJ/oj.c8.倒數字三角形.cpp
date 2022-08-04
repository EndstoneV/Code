#include <bits/stdc++.h>
#define pp printf
using namespace std;
int seed,r,a[50][50];
int main(){
	scanf("%d%d",&r,&seed);
    for(int i=1;i<=r;i++)
    	for(int j=1;j<=i;j++){
			a[i][j]=seed;
            if(seed<9)
				seed++;
//              if(seed==10)
			else
				seed=1;
		}
	for(int j=1;j<=r;j++){
		for(int l=2;l<=j;l++)
			pp(" ");
		for(int i=1;i<=r;i++){
			if(a[i][j]!=0)   
				pp("%d",a[i][j]);
		}
		pp("\n");
	}
	return 0;
}
