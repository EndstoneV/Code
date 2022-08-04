#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	char p1[9], p2[9];
	for(int i = 1; i <= n;  i++){
		cin>>p1>>p2;
		if(p1 == p2){ 
			printf("Tie");
		}
		else if(p1 == "Rock"){
			if(p2 == "Paper") printf("Player2");
			else if(p2 == "Scissors") printf("Player1"); 
		}
		else if(p1 == "Scissors"){
			if(p2 == "Paper") printf("Player1");
			else if(p2 == "Rock") printf("Player2"); 
		}
		else{
			if(p2 == "Rock") printf("Player1");
			else if(p2 == "Scissors") printf("Player2"); 
		}
	}
	return 0;
}
