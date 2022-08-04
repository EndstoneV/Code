/*beep*/
#include<bits/stdc++.h>
using namespace std;
int ifprim(int a){
	int n=1;
	for(int i=2;i<a;i++)
		if(a%i==0){
			n=0;
			break;
		}
	if(n==1 && a!=0 && a!=1)
		return true;
	else
		return false;
}
int main()
{
	int lim;
	int num_o_prim,cnt;
	num_o_prim=0,cnt=0;
	scanf("%d",&lim);
	for(int i=2;cnt<=lim;i++){
		if(ifprim(i)){
			printf("%d\n",i);
			cnt+=i;
			num_o_prim++;
		}
	}
	printf("%d",num_o_prim);
 } 
