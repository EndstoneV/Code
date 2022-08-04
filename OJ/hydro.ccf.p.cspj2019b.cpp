#include<bits/stdc++.h>
using namespace std;
struct hf{
	int trans;
	int pr;
	int tm;
	int yh;
};
bool f=false;
int cnt;
int main()
{
	int x;
	scanf("%d",&x);
	hf p[x+2];
	for(int i=1;i<=x;i++){
		scanf("%d%d%d",&p[i].trans,&p[i].pr,&p[i].tm);
		p[i].yh=0;
	}
	for(int i=1;i<=x;i++){
		if(p[i].trans==0){
			p[i].yh=p[i].pr;
			cnt+=p[i].pr;
		}	
		else{
			for(int j=1;j<i;j++){
				if(p[i].tm-p[j].tm<=45&&p[j].yh>=p[i].pr){
					f=1;
					p[j].yh=0;
					break;
				}
			}
			if(!f){
				cnt+=p[i].pr;
			}
		}
		f=0;
	}
	printf("%d",cnt);
	return 0;
 } 
