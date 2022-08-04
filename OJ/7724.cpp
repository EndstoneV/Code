#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
bool bl[5];
int main()
{
	int c=1;
	int a[5],b[5];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=4;i++) scanf("%d",&a[i]);
	for(int i=1;i<=4;i++) scanf("%d",&b[i]);
	if(a[1]!=0&&a[2]!=0&&a[3]!=0&&a[4]!=0){
		if(a[1]!=b[1]||a[2]!=b[2]||a[3]!=b[3]||a[4]!=b[4]){
			printf("No");
			return 0;	
		}
		printf("Yes");
	}
	else if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0){
		printf("No");
		return 0;
	}
	else{
		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				if(a[i]==b[j]){
					bl[c]=true;
					c++;
				}
			}
		}
		for(int i=1;i<=4;i++){
			if(bl[i]==false){
				printf("No");
				return 0;
			}
		}
		printf("Yes");
	}
}
