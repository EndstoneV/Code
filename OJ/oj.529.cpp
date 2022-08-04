#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a1, b1;
	scanf("%d",&n);
	getchar();
    char r[26]={0};
    int a[26][2]={0},cnt=0,k;//[132][zt]
    a[0][0]=97,a[0][1]=1;
    for(int i=0;i<n;i++){
	    scanf("%c%*c%c%*c",&a1,&b1);
	    a[a1-97][0]=a1;
	    a[a1-97][1]=a[b1-97][1];
	}
    for(int i=0;i<26;i++){
	    if(a[i][1]){
		    r[i] = 1;
		    k = i;
		}
	}
    for(int i=0;i<26;i++){
	    if(r[i] && i!=k){
		    printf("%c ",i+'a');
		    cnt++;
		}
	    else{
		    if(r[i]){
			    printf("%c",i+'a');
			    cnt++;
			}
		}
	}
    if(!cnt) printf("none");
   return 0;
}
