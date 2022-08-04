#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, a, b, sum = 0;
    scanf("%d%d%d", &a, &b, &h);
    int t = (h - a) / (a - b), tyu = (h - a) % (a - b);
    if(tyu == 0) printf("%d", t + 1);
    else{
		sum = t * (a - b) + a;
	        while(sum < h){
	            sum -= b;
	            sum += a;
	            ++t;
	        }
	    	++t;
	        printf("%d", t);
	    }
}

