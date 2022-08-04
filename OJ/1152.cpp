#include<bits/stdc++.h>
using namespace std;
bool bl[99999];
int main(){
	int n;
	cin>>n;
	signed long int x[99999];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=2;i<=n;i++){
		bl[abs(x[i]-x[i-1])]=true;
	}
	for(int i=1;i<=n-1;i++){
		if(!bl[i]){
			printf("Not jolly");
			return 0;
		} 
	}
	printf("Jolly");
	return 0; 
}
//    
