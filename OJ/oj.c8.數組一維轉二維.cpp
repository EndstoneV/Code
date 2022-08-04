#include<bits/stdc++.h>
int main(){ 
	int n,a[100],b[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
				b[i][j]=a[j];
			}
	int t=a[0];
	for(int j=0;j<n-1;j++){
		a[j]=a[j+1];
	}
	a[n-1]=t;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		std::cout<<std::endl;
	}
	return 0;
}
