#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,n(0);
	cin>>x;
	getchar();
	char c=getchar();
	n+=8;
	if(x>1000){
		n+=4*ceil((x-1000)/500);
	}
	if(c=='y') n+=5;
	printf("%.0lf",n);
	return 0;
}
