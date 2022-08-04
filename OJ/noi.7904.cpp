#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11],x,cnt;
	for(int i=1;i<=10;i++) scanf("%d",&a[i]);
	scanf("%d",&x);
	x+=30;
	for(int i=1;i<=10;i++) if(a[i]<=x) cnt++;
	printf("%d",cnt);
} 
