#include<bits/stdc++.h>
#define mxsz 999999
using namespace std;
int j[mxsz][mxsz][mxsz];

int w(int a, int b, int c){
	if(j[a][b][c]) return j[a][b][c];
	else if(a<=0 || b<=0 || c<=0) return 1;
	else if(a>20 || b>20 || c>20) return 1048576;
	else{
		int q(w(a-1,b,c)),s(w(a-1,b-1,c)),e(w(a-1,b,c-1)),r(w(a-1, b-1,c-1)),ans(0);
		ans=ans+q+s+e-r;
		j[a][b][c]=ans;
		return ans;
	}
}
int main(){
	memset(j,0,sizeof(j));
	int a,b,c;
	while(1){
		scanf("%d%d%d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1){
			break;
		}
		printf("w(%d, %d, %d) = ",a,b,c);
		printf("%d\n",w(a,b,c));
	}
	return 0;
}

