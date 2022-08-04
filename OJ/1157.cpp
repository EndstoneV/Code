#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int r,n;
int b[22];
int main(){
	//next_permutation!
	scanf("%d%d",&n,&r);
	for(int j=r;j<n;j++) b[j]=1;
	do{
		for(int i=0;i<n;i++){
			if(!b[i]) printf("%3d",i+1);
		}
		cout<<endl;
	}
	while(next_permutation(b,b+n));
	return 0;
}
