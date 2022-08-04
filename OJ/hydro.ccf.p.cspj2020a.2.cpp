#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
	scanf("%d",&n);
    if(n%2){
		printf("-1");
	}
    else{
        while(1){
            int b=pow(2,i);
            if(b>n){
				printf("%d ",int(pow(2, i - 1)));
                n-=pow(2,i-1);
                i=0;
            }
            if(!n){
                return 0;
            }
			i++;
        }
    }
    return 0;
}
