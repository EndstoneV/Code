#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

char s[2500 * 25 + 1];
int main()
{
	int n(0);
	int hh(0),ds(0);
    char c(0);
    while(scanf("%c",&c)&&(c!='E')){
        if(c=='W'||c=='L'){
          s[n]=c;
          n++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='W')
			hh++;
        if(s[i]=='L')
			ds++;
        if((hh>=11||ds>=11)&&(hh-ds>=2||hh-ds<=-2)){
            printf("%d:%d\n",hh,ds);
            hh=0;
			ds=0;
        }
    }
    printf("%d:%d\n",hh,ds);
	printf("\n");
    hh=0; 	  	  
    ds=0;		  
	for(int i=0;i<n;i++){
        if(s[i]=='W')
			hh++;
        if(s[i]=='L')
			ds++;
        if((hh>=21||ds>=21)&&(hh-ds>=2||hh-ds<=-2)){
            printf("%d:%d\n",hh,ds);
            hh=0;
			ds=0;
        }
    }
    printf("%d:%d\n",hh,ds);
	return 0;
}