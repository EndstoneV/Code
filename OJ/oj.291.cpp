#include<bits/stdc++.h>
using namespace std;
int cnt,m;
int main(){
	scanf("%d",&m);
	while(m!=1){
		m/=2;
		cnt++;
	}
	printf("%d",cnt);
	return 0; 
}
